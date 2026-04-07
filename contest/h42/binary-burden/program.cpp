#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<long long int, long long int> mp;
    long long int sum = 0;
    long long int cnt = 0;
    mp[0] = 1;
    for(int i=0;i<n;i++){
        sum += (s[i]=='0') ? 1 : -1;
        if(mp.find(sum) != mp.end()){
            cnt += mp[sum];
        }
        mp[sum]++;
    }
    long long int ans = 1LL*n*(n+1)/2;
    cout<<ans+cnt<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
