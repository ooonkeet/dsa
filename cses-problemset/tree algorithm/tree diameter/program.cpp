#include <bits/stdc++.h>

using namespace std;
const int maxN = 2e5+1;

int N, a, b, last, dist[maxN];
vector<int> G[maxN];

void dfs(int u, int p = 0){
    for(int v : G[u]){
        if(v != p){
            dist[v] = dist[u]+1;
            dfs(v, u);
        }
    }
}

int main(){
    cin>>N;
    //scanf("%d", &N);
    for(int i = 0; i < N-1; i++){
        cin>>a>>b;
        //scanf("%d %d", &a, &b);
        G[a].push_back(b);
        G[b].push_back(a);
    }

    dfs(1);
    for(int i = 1; i <= N; i++)
        if(dist[i] > dist[last])
            last = i;
    dist[last] = 0;
    dfs(last);
    for(int i = 1; i <= N; i++)
        if(dist[i] > dist[last])
            last = i;
    cout<<dist[last]<<endl;
    //printf("%d\n", dist[last]);
}