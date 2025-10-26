#include <bits/stdc++.h>
using namespace std;

struct Range {
    int l, r, idx;
    bool operator<(const Range &other) const {
        if (l == other.l)
            return r > other.r; // larger r first if same l
        return l < other.l;
    }
};

struct Fenwick {
    vector<int> bit;
    int n;
    Fenwick(int n) : n(n) { bit.assign(n + 1, 0); }
    void update(int idx, int val) {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += val;
    }
    int query(int idx) {
        int s = 0;
        for (; idx > 0; idx -= idx & -idx)
            s += bit[idx];
        return s;
    }
    int range_query(int l, int r) {
        return query(r) - query(l - 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Range> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].l >> v[i].r;
        v[i].idx = i;
    }

    sort(v.begin(), v.end());

    // coordinate compression for 'r' values
    vector<int> all_r;
    for (auto &x : v) all_r.push_back(x.r);
    sort(all_r.begin(), all_r.end());
    all_r.erase(unique(all_r.begin(), all_r.end()), all_r.end());
    auto get_r = [&](int x) {
        return int(lower_bound(all_r.begin(), all_r.end(), x) - all_r.begin()) + 1;
    };

    vector<int> contains(n), contained(n);
    Fenwick bit(all_r.size());

    // Pass 1: count how many contain it (contained count)
    for (int i = 0; i < n; i++) {
        int r_idx = get_r(v[i].r);
        // number of previous ranges with r >= this r
        contained[v[i].idx] = bit.range_query(r_idx, all_r.size());
        bit.update(r_idx, 1);
    }

    // reset BIT
    bit = Fenwick(all_r.size());

    // Pass 2: count how many it contains
    for (int i = n - 1; i >= 0; i--) {
        int r_idx = get_r(v[i].r);
        // number of later ranges with r <= this r
        contains[v[i].idx] = bit.query(r_idx);
        bit.update(r_idx, 1);
    }

    for (int x : contains) cout << x << " ";
    cout << "\n";
    for (int x : contained) cout << x << " ";
    cout << "\n";
}
