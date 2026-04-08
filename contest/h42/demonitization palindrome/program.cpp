#include <bits/stdc++.h>
using namespace std;

// Original Problem Idea by ritsom

#ifdef LOCAL
#include  "../debug.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define ff first
#define ss second
#define pb push_back
#define BIG 998244353
#define MOD 1000000007
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;

vi denoms;
vpii pairs;
vpii ord;

void stroboPals(string curr) {
    if (!curr.empty() && curr[0] != '0') {
        denoms.push_back(stoll(curr));
    }

    if (curr.size() + 2 > 12) {
        return;
    }

    for (char c : {'0', '1', '8'}) {
        string nxt = c + curr + c;
        stroboPals(nxt);
    }
}

void precompute() {
    stroboPals("");
    stroboPals("0");
    stroboPals("1");
    stroboPals("8");

    sort(all(denoms));

    for (int i = 0; i < sz(denoms); i++) {
        for (int j = 0; j < sz(denoms); j++) {
            pairs.push_back({denoms[i] + denoms[j], pairs.size()});
            ord.push_back({denoms[i], denoms[j]});
        }
    }

    sort(all(pairs));
}

void solve() {
    ll n;
    cin >> n;

    if (auto it = lower_bound(all(denoms), n); it != denoms.end() && *it == n) {
        cout << "1\n";
        cout << n << "\n";
        return;
    }

    if (auto it = lower_bound(all(pairs), pii(n, -1)); it != pairs.end() && it->ff == n) {
        cout << "2\n";
        cout << ord[it->ss].ff << " " << ord[it->ss].ss << "\n";
        return;
    }

    for (auto &p1: denoms) {
        if (p1 > n) break;
        if (auto it = lower_bound(all(pairs), pii(n - p1, -1)); it != pairs.end() && it->ff == n - p1) {
            cout << "3\n";
            cout << p1 << " " << ord[it->ss].ff << " " << ord[it->ss].ss << "\n";
            return;
        }
    }

    for (auto &[x, idx]: pairs) {
        if (x > n) break;
        if (auto it = lower_bound(all(pairs), pii(n - x, - 1)); it != pairs.end() && it->ff == n - x) {
            cout << "4\n";
            cout << ord[idx].ff << " " << ord[idx].ss << " " << ord[it->ss].ff << " " << ord[it->ss].ss << "\n";
            return;
        }
    }

    cout << -1 << "\n";
}

int main() {
    auto start = chrono::high_resolution_clock::now();
    fast_io;
    precompute();
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    #ifdef LOCAL
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;
        cerr << "Execution time: " << duration.count() << " seconds" << endl;
    #endif
}
