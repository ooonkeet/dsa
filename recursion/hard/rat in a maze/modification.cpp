#include <bits/stdc++.h>
using namespace std;
void solve(int i,int j, vector<vector<int> > &grid,int n,vector<string> &ans,string move,vector<vector<int>> &vis, vector<int> &x,vector<int> &y) {
    if (i==n-1 && j==n-1) {
        ans.push_back(move);
        return;
    }
    string dir="DLRU";
    for (int ind=0;ind<4;ind++) {
        int nexti=i+x[ind];
        int nextj=j+y[ind];
        if (nexti>=0 && nextj>=0 && nexti<n && nextj<n && !vis[nexti][nextj] && grid[nexti][nextj]==1) {
            vis[i][j]=1;
            solve(nexti,nextj,grid,n,ans,move+dir[ind],vis,x,y);
            vis[i][j]=0;
        }
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
    vector<int> x={1,0,0,-1};
    vector<int> y={0,-1,1,0};
    if(grid[0][0]==1) {
        solve(0,0,grid,siz,ans,"",vis,x,y);
        for(int i=0;i<ans.size();i++) {
            cout<<ans[i]<<" ";
        }
    }
    else
        cout<<"Cannot be traversed as starting is blocked"<<endl;
    return 0;
}