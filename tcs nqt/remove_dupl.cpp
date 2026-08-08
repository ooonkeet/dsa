#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    vector<int> v(t);
    unordered_set<int> s;
    for(int i=0;i<t;i++) {
        cin>>v[i];
        s.insert(v[i]);
    }
    for (auto x:s) {
        cout<<x<<"  ";
    }
    cout<<endl;
    return 0;
}