#include<bits/stdc++.h>
using namespace std;
int tabz(int idx,vector<int> &arr,vector<int> &dp,int k){
    dp[0]=0;
    for (int i=1;i<idx;i++) {
        int minSteps=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jump=dp[i-j]+abs(arr[i]-arr[i-j]);
                minSteps=min(minSteps,jump);
            }
        }
        dp[i]=minSteps;
    }
    return dp[idx-1];
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n,-1);
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<tabz(n,arr,dp,k)<<endl;
}