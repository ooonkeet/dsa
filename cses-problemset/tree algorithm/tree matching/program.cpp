#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[200001][2];
int treeMatching(int vertex,bool isIncluded,vector<vector<int>>& v,int par)
{
    if(dp[vertex][isIncluded]!=-1)
        return dp[vertex][isIncluded];
    if(isIncluded)
    {
        int ans=0;
        for(int neig:v[vertex])
        {
            if(neig!=par)
                ans+=treeMatching(neig,1,v,vertex);
        }
        int myres=0;
        for(int neig:v[vertex])
        {
            if(neig!=par)
                myres=max(myres,ans-dp[neig][1]+1+treeMatching(neig,0,v,vertex));
        }
        dp[vertex][isIncluded]=myres;
        return myres;
    }
    else
    {
        int ans=0;
        for(int neig:v[vertex])
        {
            if(neig!=par)
                ans+=treeMatching(neig,1,v,vertex);
        }
        dp[vertex][isIncluded]=ans;
        return ans;
    }
}
signed main()
{
    int n;
    cin>>n;
    int temp=n-1;
    vector<vector<int>> v(n+1);
    memset(dp,-1,sizeof(dp));
    while(temp>0)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        temp--;
    }
    cout<<max(treeMatching(1,0,v,-1),treeMatching(1,1,v,-1))<<endl;
}