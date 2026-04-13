#include <bits/stdc++.h>
using namespace std;

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

void solve() {
    int n, m, t, q;
    cin >> n >> m >> t >> q;


    vector<array<ll, 3>> yield(t);
    for (int i = 0; i < t; i++) {
        cin >> yield[i][0] >> yield[i][1] >> yield[i][2];
        yield[i][0]--, yield[i][1]--;
    }

    vector<array<ll, 5>> logger(q);
    vector<vector<int>> grid(n, vector<int>(m, -1));

    for (int i = 0; i < q; i++) {
        cin >> logger[i][0] >> logger[i][1] >> logger[i][2] >> logger[i][3] >> logger[i][4];
        logger[i][0]--, logger[i][1]--, logger[i][2]--, logger[i][3]--;

        for (int r = logger[i][0]; r <= logger[i][1]; r++) {
            for (int c = logger[i][2]; c <= logger[i][3]; c++) {
                grid[r][c] = i;
            }
        }
    }

    vector<int> ans(q, -1);
    vector<long long> out(q, 0);

    for (int i = 0; i < t; i++) {
        int r = yield[i][0], c = yield[i][1];
        long long v = yield[i][2];


        if (grid[r][c] != -1) {
            out[grid[r][c]] += v;
            if (out[grid[r][c]] >= logger[grid[r][c]][4] && ans[grid[r][c]] == -1) {
                cerr << grid[r][c] << " " << i << "\n";
                ans[grid[r][c]] = i;
            }
        }
    }

    for (int i = 0; i < q; i++) {
        cout << ((ans[i] == -1) ? -1 : ans[i] + 1)  << " ";
    }
    cout << "\n";
}

int main() {
    auto start = chrono::high_resolution_clock::now();
    fast_io;
    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    #ifdef LOCAL
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;
        cerr << "Execution time: " << duration.count() << " seconds" << endl;
    #endif
}
