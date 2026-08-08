#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &v,int tget) {
    unordered_map<int,int> mp;
    int n=v.size();
    for(int i=0;i<n;i++) {
        int comp=tget-v[i];
        if (mp.find(comp)!=mp.end()) {
            return{mp[comp],i};
        }
        mp[v[i]]=i;
    }
    return {};
}
int main() {
    int n,tget;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    cin>>tget;
    vector<int> t=twoSum(v,tget);
    if (!t.empty()) {
        cout<<t[0]<<" "<<t[1];
    }
    else {
        cout<<"NR";
    }
    return 0;
}