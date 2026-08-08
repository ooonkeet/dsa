#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    vector<int> v;
    for(int i=0;i<s.size();i++) {
        if (s[i]>='0' && s[i]<='9') {
            v.push_back(s[i]-'0');
        }
    }
    for (int k:v) {
        cout<<k<<"  ";
    }
}