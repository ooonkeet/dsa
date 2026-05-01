#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
vector<bool> isPrime;
void compute() {
    isPrime.assign(N, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; 1LL * i * i < N; i++) {
        if(!isPrime[i]) continue;
        for(int j = i * i; j < N; j += i) {
            isPrime[j] = false;
        }
    }
 }

void solve() {
    int n;
    cin >> n;
    string ans = "";
    for(int i = 1; i <= n; i++) {
        if(isPrime[i]) ans += "P";
        else ans += "NP";
    }
    cout << ans << '\n';
}
int main() {
    int t;
    cin >> t;
    compute();
    while(t--) solve();
    return 0;
}