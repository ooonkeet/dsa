#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
const int MAXN = 200005;
const int LOGN = 20;
int a[MAXN];
vector<int> adj[MAXN];
int up[MAXN][LOGN];
int depth[MAXN];
vector<int> pnode[MAXN];

void dfs(int root, int p, int d){
    vector<pair<int,int>> st;
    st.push_back({root,p});
    depth[root]=d;
    while(!st.empty()){
        int u=st.back().first;
        int par=st.back().second;
        st.pop_back();
        up[u][0]=par;
        for(int i=1;i<LOGN;i++){
            up[u][i]=up[up[u][i-1]][i-1];
        }
        for(int v:adj[u]){
            if(v!=par) {
                depth[v]=depth[u]+1;
                st.push_back({v,u});
            }
        }
    }
}

int get_lca(int u, int v) {
    if(depth[u]<depth[v]) swap(u,v);
    for(int i=LOGN-1;i>=0;i--){
        if(depth[u]-(1<<i)>=depth[v]) u=up[u][i];
    }
    if(u==v) return u;
    for(int i=LOGN-1;i>=0;i--){
        if(up[u][i]!=up[v][i]){
            u=up[u][i];
            v=up[v][i];
        }
    }
    return up[u][0];
}

int get_dist(int u, int v) {
    return depth[u]+depth[v]-2*depth[get_lca(u,v)]+1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=0;i<n-1;i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    dfs(1,1,0);
    for(int i=1;i<=n;i++){
        int v=a[i];
        for(int j=2;j*j<=v;j++){
            if(v%j==0){
                pnode[j].push_back(i);
                while(v%j==0) v/=j;
            }
        }
        if(v>1) pnode[v].push_back(i);
    }
    int ans=0;
    for(int i=1;i<MAXN;i++){
        if(pnode[i].size()<2) continue;
        const auto &nodes=pnode[i];
        int u=nodes[0];
        int v=u,max_d=-1;
        for(auto e: nodes){
            int d=get_dist(u,e);
            if(d>max_d){
                max_d=d;
                v=e;
            }
        }
        for(int e: nodes){
            ans=max(ans,get_dist(v,e));
        }

    }
    cout << ans << endl;
    return 0;
}
