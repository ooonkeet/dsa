#include <bits/stdc++.h>
using namespace std;
string toBin(int n) {
    string s(8, '0');
    for (int i = 7; i >= 0;--i) {
        s[i] = char('0' + (n & 1));
        n >>= 1;
    }
    return s;
    }
int toDec(const string& s) {
    int val = 0;
    for (char c : s) val = (val << 1) + (c-'0');
    return val;
    }
string nxt(const string& s) {
    int len = (int)s.length();
    string ns(len, '0');
    for (int i = 1; i < len- 1; i++) {
        ns[i] = (s[i- 1] == s[i + 1]) ? '1' : '0';
        }
    return ns;
}
void solve() {
    int n, k;
    cin >> n >> k;
    string s = toBin(n);
    unordered_map<string, int> firstSeen;
    vector<string> seq;
    while (!firstSeen.count(s)) {
        firstSeen[s] = (int)seq.size();
        seq.push_back(s);
        s = nxt(s);
    }

     int cycleStart = firstSeen[s];
     int cycleLen = (int)seq.size()- cycleStart;

     int idx;
if(k < cycleStart) {
    idx = k;
} else {
    idx = cycleStart + (k- cycleStart) % cycleLen;
}
cout << toDec(seq[(int)idx]) << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}