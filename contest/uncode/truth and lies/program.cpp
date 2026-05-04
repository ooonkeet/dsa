#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int mx = 0;
    for(int i = 1; i < n; i++) {
        mx = max(mx, abs(a[i]- a[i-1]));
    }
    cout << mx / k << '\n';

    }
int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;

     }