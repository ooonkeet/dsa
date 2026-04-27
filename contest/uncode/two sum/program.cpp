#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    string s = to_string(n);
    if(s.length() == 1) {
        cout << s[0] << '\n';
        return;
    }
    int first = s[0]- '0';
    int last = s[s.length()-1]- '0';
    cout << first + last << '\n';
}


int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}