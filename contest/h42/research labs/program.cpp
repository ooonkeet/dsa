
#include <bits/stdc++.h>
#define long long long int
using namespace std;

long lcm(long a ,long b){
    return (a*b)/__gcd(a,b);
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    set<pair<int, int>> d;
    d.insert({a[0], b[0]});
    for (int i = 1; i < n; i++) {
        set<pair<int, int>> dd;
        for (auto p : d) {
            dd.insert({__gcd(p.first, a[i]), __gcd(p.second, b[i])});
            dd.insert({__gcd(p.first, b[i]), __gcd(p.second, a[i])});
        }
        d = dd;
    }
    long res = 0;
    for (auto p : d) {
        res = max(res, lcm((long)p.first, (long)p.second));
    }
    cout << res << "\n";

    return 0;
}
