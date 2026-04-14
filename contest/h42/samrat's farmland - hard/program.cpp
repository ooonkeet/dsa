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

const int MAXN = 500;
ll bit[MAXN][MAXN];

void build(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bit[i][j] = 0ll;
        }
    }
}

ll sum(int r, int c) {
    ll tot = 0;
    for (; r >= 0; r = (r & (r + 1)) - 1) {
        for (int j = c; j >= 0; j = (j & (j + 1)) - 1) {
            tot += bit[r][j];
        }
    }
    return tot;
}

ll query(int r1, int r2, int c1, int c2) {
    ll tot = sum(r2, c2);
    if (r1 > 0) tot -= sum(r1 - 1, c2);
    if (c1 > 0) tot -= sum(r2, c1 - 1);
    if (r1 > 0 && c1 > 0) tot += sum(r1 - 1, c1 - 1);
    return tot;
}

void update(int n, int m, int r, int c, ll v) {
    for (; r < n; r = r | (r + 1)) {
        for (int j = c; j < m; j = j | (j + 1)) {
            bit[r][j] += v;
        }
    }
}

void solve() {
    int n, m, t, q;
    cin >> n >> m >> t >> q;


    vector<array<ll, 3>> yield(t);
    for (int i = 0; i < t; i++) {
        cin >> yield[i][0] >> yield[i][1] >> yield[i][2];
        yield[i][0]--, yield[i][1]--;
    }

    vector<array<ll, 5>> logger(q);
    for (int i = 0; i < q; i++) {
        cin >> logger[i][0] >> logger[i][1] >> logger[i][2] >> logger[i][3] >> logger[i][4];
        logger[i][0]--, logger[i][1]--, logger[i][2]--, logger[i][3]--;
    }

    vpii qry(q, {0, t - 1});
    int qry_rem = q;
    vi ans(q);

    vvi qry_idx(t);
    int init_mid = (t - 1) / 2;
    for (int i = 0; i < q; i++)
        qry_idx[init_mid].pb(i);

    while (qry_rem) {
        build(n, m);

        for (int i = 0; i < t; i++) {
            update(n, m, yield[i][0], yield[i][1], yield[i][2]);

            while (!qry_idx[i].empty()) {
                auto idx = qry_idx[i].back();
                qry_idx[i].pop_back();

                ll tot = query(logger[idx][0], logger[idx][1], logger[idx][2], logger[idx][3]);

                if (tot >= logger[idx][4]) qry[idx].ss = i - 1;
                else qry[idx].ff = i + 1;

                if (qry[idx].ff <= qry[idx].ss) {
                    int mid = (qry[idx].ff + qry[idx].ss) / 2;
                    qry_idx[mid].pb(idx);
                }
                else {
                    qry_rem--;
                    ans[idx] = qry[idx].ff;
                }
            }
        }
    }

    for (int i = 0; i < q; i++) {
        cout << ((ans[i] == t) ? -1 : ans[i] + 1)  << " ";
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
