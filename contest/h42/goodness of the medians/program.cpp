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

const int MAXN = 2e5 + 10;
ll fact[MAXN], invfact[MAXN];

ll mult(ll p, ll q, ll m = MOD) {
    return (((p%m)*(q%m))%m);
}

ll binpow(ll p, ll q) {
    if (q == 0) return 1ll;
    ll temp = binpow(p, q/2);
    temp = mult(temp, temp);

    if (q%2) return mult(temp, p);
    return temp;
}

ll mod_inv(ll a, ll m = MOD) {
    return binpow(a, m - 2);
}

void precompute() {
    fact[0] = invfact[0] = 1ll;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = mult(fact[i-1], i);
        invfact[i] = mult(invfact[i-1], mod_inv(i));
    }
}

ll ncr(ll n, ll r) {
    if (n < r) return 0ll;
    return mult(fact[n], mult(invfact[r], invfact[n-r]));
}

void solve() {
    ll n, q;
    cin >> n >> q;

    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(all(a));
    vi pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
        pref[i] = pref[i-1] + a[i];

    debug(a);
    auto moves = [&](ll i, ll y) {
        ll j = distance(a.begin(), upper_bound(all(a), y));
        if (i < j) return 0ll;

        ll moves = pref[i] - ((j > 0) ? pref[j - 1] : 0);
        moves -= (i - j + 1) * y;
        debug(i, moves);
        return moves;
    };

    auto ways = [&](ll le, ll k) {
        ll g = n - le;
        ll tot = 0ll;

        for (int i = (k + 1) / 2; i <= k; i++) {
            tot += mult(ncr(le, i), ncr(g, k - i));
            tot %= MOD;
        }

        return tot;
    };

    while (q--) {
        ll x, k, y;
        cin >> x >> k >> y;

        ll lo = 0, hi = n - 1;
        while (lo <= hi) {
            ll mid = (lo + hi) / 2;

            if (moves(mid, y) > x) hi = mid - 1;
            else lo = mid + 1;
        }

        ll i = min(hi, n - 1);
        cout << ways(i + 1, k) << " ";
    }
    cout << "\n";
}
int main() {
    auto start = chrono::high_resolution_clock::now();
    precompute();
    fast_io;
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
