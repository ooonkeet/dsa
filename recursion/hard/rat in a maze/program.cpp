#include<bits/stdc++.h>
using namespace std;
void solve(int i,int j,vector<vector<int> > &grid,int n, vector<vector<int> > &vis,vector<string> &ans,string move){
    if(i==n-1&&j==n-1){
        ans.push_back(move);
        return;
    }
    // downward
    if(i+1<n && !vis[i+1][j] && grid[i+1][j]==1){
        vis[i][j]=1;
        solve(i+1,j,grid,n,vis,ans,move+'D');
        vis[i][j]=0;
    }
    //left
    if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1){
        vis[i][j]=1;
        solve(i,j-1,grid,n,vis,ans,move+'L');
        vis[i][j]=0;
    }
    //right
    if(j+1<n && !vis[i][j+1] && grid[i][j+1]==1){
        vis[i][j]=1;
        solve(i,j+1,grid,n,vis,ans,move+'R');
        vis[i][j]=0;
    }
    //upward
    if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1){
        vis[i][j]=1;
        solve(i-1,j,grid,n,vis,ans,move+'U');
        vis[i][j]=0;
    }
}
int main(){
    int siz;
    cin>>siz;
    vector<vector<int> > grid;
    for(int i=0;i<siz;i++){
        vector<int> v;
        for(int j=0;j<siz;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        grid.push_back(v);
    }
    vector<string> ans;

    vector<vector<int>> vis(siz,vector<int>(siz,0));
    if(grid[0][0]==1) {
        solve(0,0,grid,siz,vis,ans,"");
        for(int i=0;i<ans.size();i++) {
            cout<<ans[i]<<" ";
        }
    }
    else
        cout<<"Cannot be traversed as starting is blocked"<<endl;
    return 0;
}