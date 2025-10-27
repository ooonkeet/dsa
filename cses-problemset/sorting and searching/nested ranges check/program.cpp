#include <bits/stdc++.h>
using namespace std;

struct Range {
    int l, r, idx;
    bool operator<(const Range &other) const {
        if (l == other.l)
            return r > other.r; // larger r first if l equal
        return l < other.l;
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

    vector<int> contains(n), contained(n);

    // Pass 1: check if current range is contained in a previous range
    int maxR = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].r <= maxR)
            contained[v[i].idx] = 1;
        maxR = max(maxR, v[i].r);
    }

    // Pass 2: check if current range contains a later range
    int minR = 1e9 + 5;
    for (int i = n - 1; i >= 0; i--) {
        if (v[i].r >= minR)
            contains[v[i].idx] = 1;
        minR = min(minR, v[i].r);
    }

    for (int x : contains) cout << x << " ";
    cout << "\n";
    for (int x : contained) cout << x << " ";
    cout << "\n";
}