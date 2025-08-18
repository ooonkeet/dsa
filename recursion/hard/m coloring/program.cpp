#include<bits/stdc++.h>
using namespace std;
bool isSafe(int node,vector<int> color,vector<vector<bool>> graph,int n,int col){
    for(int i=0;i<n;i++){
        if(i!=node && graph[i][node]==1 && color[i]==col){
            return false;
        }
    }
    return true;
}
bool solve(int node,vector<int> color,int m,int N,vector<vector<bool>> graph){
    if(node==N){
        return true;
    }
    for(int i=1;i<=m;i++){
        if(isSafe(node,color,graph,N,i)){
            color[node]=i;
            if(solve(node+1,color,m,N,graph)){
                return true;
            }
            color[node]=0;
        }
    }
    return false;
}
bool graphColoring(vector<vector<bool>> graph,int m,int N){
    vector<int> color(N,0);
    if(solve(0,color,m,N,graph)){
        return true;
    }
    return false;
}
int main(){
    int v,m;
    cin>>v>>m;
    vector<vector<bool>> graph;
    for(int i=0;i<v;i++){
        vector<bool> temp;
        for(int j=0;j<v;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        graph.push_back(temp);
    }
    if(graphColoring(graph,m,v)){
        cout<<"YES, graph can be colored."<<endl;
    }
    else{
        cout<<"NO, graph cannot be colored."<<endl;
    }
    return 0;
}