#include<bits/stdc++.h>
using namespace std;
const int INF=1e9+5;
vector<pair<int,int>>dirs={{-2,-1},{-2,1},{-1,2},{-1,-2},{1,-2},{1,2},{2,-1},{2,1}};
int main(){
    int n;
    cin>>n;
    vector<vector<int>>dist(n,vector<int>(n,INF));
    vector<pair<int,int>>q;
    q.emplace_back(0,0);
    dist[0][0]=0;
    for(int i=0;i<(int)q.size();i++){
        auto[row,col]=q[i];
        for(pair<int,int> dir:dirs){
            int r2=row+dir.first,c2=col+dir.second;
            if(0<=min(r2,c2) && max(r2,c2)<n && dist[r2][c2]==INF){
                dist[r2][c2]=dist[row][col]+1;
                q.emplace_back(r2,c2);
            }
        }
    }
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout<<dist[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}