#include <bits/stdc++.h>
using namespace std;
int sod(int x) {
    int sum = 0;
    while(x) {
        int d = x % 10;
        sum += d;
        x /= 10;
    }
    return sum;
}
int sod(string& s) {
    int sum = 0;
    for(auto& ch : s) sum += (ch-'0');
    return sum;
}
void solve() {
    string s;
    cin >> s;
    int len = s.length();
    if(len == 1) {
        cout << s << '\n';
        return;
    }
    string ans = s;
    int ds = sod(s);
    while(1) {
        ans += to_string(ds);
        if(ds < 10) break;
        ds = sod(ds);
    }

    cout << ans << '\n';
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}