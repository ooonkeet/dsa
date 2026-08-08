#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cin>>k;
    map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[v[i]]++;
    for (pair<int,int> p:mp)
        if (p.second>k)
            cout<<p.first<<" ";
    return 0;
}