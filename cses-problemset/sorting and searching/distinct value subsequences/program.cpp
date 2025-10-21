#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    ll res=1;
    for(auto &[val,freq]:mp){
        res=(res*(freq+1))%MOD;
    }
    res=(res-1+MOD)%MOD;
    cout<<res<<endl;
}