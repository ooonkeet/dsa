#include <bits/stdc++.h>
using namespace std;
int main() {
    string st;
    cin>>st;
    unordered_map<char,int> map;
    for(int i=0;i<st.length();i++) {
        map[st[i]]++;
    }
    int star=0,hash=0;
    for (pair<char,int> i:map) {
        if (i.first=='*')
            star+=i.second;
        else if (i.first=='#') {
            hash+=i.second;
        }
    }
    cout<<star-hash<<endl;
    //cout<<abs(hash-star)<<endl;
    return 0;
}