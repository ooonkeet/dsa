#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    s.erase(remove(s.begin(),s.end(),'['),s.end());
    s.erase(remove(s.begin(),s.end(),']'),s.end());
    s.erase(remove(s.begin(),s.end(),'"'),s.end());
    stringstream ss(s);
    vector<string> v;
    string temp;
    while (getline(ss,temp,','))
        v.push_back(temp);
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<"  ";
    }
    return 0;
}