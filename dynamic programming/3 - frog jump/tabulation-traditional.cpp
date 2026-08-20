#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> heights(n);
    vector<int> dp(n,0);
    for(int i=0;i<n;i++)
        cin>>heights[i];
    dp[0]=0;
    for (int idx=1;idx<n;idx++) {
        int left=dp[idx-1]+abs(heights[idx]-heights[idx-1]);
        int right=INT_MAX;
        if(idx>1)
            right=dp[idx-2]+abs(heights[idx]-heights[idx-2]);
        dp[idx]=min(left,right);
    }
    cout<<"Minimum jump:- "<<dp[n-1]<<endl;
}