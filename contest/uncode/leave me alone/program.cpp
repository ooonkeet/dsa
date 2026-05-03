 #include <bits/stdc++.h>
using namespace std;
vector<vector<int>> tree;
vector<int> sub;

void dfs(int v, int p) {
    int cnt = 0;
    for(auto& u : tree[v]) {
         if(u != p) cnt++;
        }
    bool isLeaf = (cnt == 0);
    if(isLeaf) sub[v] = v;
    for(auto& u : tree[v]) {
        if(u == p) continue;
        dfs(u, v);
        sub[v] ^= sub[u];
        }
    }
void solve() {
    int n;
    cin >> n;
    tree.assign(n + 1, {});
    sub.assign(n + 1, 0);
    for(int i = 0; i < n- 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1, 0);
    for(int i = 1; i <= n; i++) {
        cout << sub[i] <<' ';
    }
    cout << '\n';
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}