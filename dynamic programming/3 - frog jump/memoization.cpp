#include<bits/stdc++.h>
using namespace std;
int recur(int idx, vector<int> &heights,vector<int> &dp){
    if(idx==0)
        return 0;
    if(dp[idx]!=-1)
        return dp[idx];
    int left=recur(idx-1,heights,dp)+abs(heights[idx]-heights[idx-1]);
    int right=INT_MAX;
    if(idx>1)
        right=recur(idx-2,heights,dp)+abs(heights[idx]-heights[idx-2]);
    return min(left,right);
}
int main(){
    int n;
    cin>>n;
    vector<int> heights(n);
    vector<int> dp(n+1,-1);
    for(int i=0;i<n;i++)
        cin>>heights[i];
    cout<<"Minimum jump:- "<<recur(n-1,heights,dp)<<endl;
}