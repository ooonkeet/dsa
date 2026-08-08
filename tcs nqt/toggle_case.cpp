#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i]>=65 && s[i]<=90) {
            //s[i]+=32;
            s[i]=tolower(s[i]);
        }
        else if (s[i]>=97 && s[i]<=122) {
            //s[i]-=32;
            s[i]=toupper(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}