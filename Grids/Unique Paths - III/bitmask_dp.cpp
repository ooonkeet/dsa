class Solution {
public:
    int m,n,endMask,endPos;
    unordered_map<long long,int>memo;
    int dfs(int pos,int mask,vector<vector<int>>&adj){
        if(pos==endPos)
            return mask==endMask;
        long long key=((long long)pos<<32)|mask;
        if(memo.count(key))
            return memo[key];
        int res=0;
        for(int next:adj[pos])
            if(!(mask & (1<<next)))
                res+=dfs(next,mask|(1<<next),adj);
        return memo[key]=res;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        map<pair<int,int>,int>id;
        int idx=0,startPos;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=-1){
                    id[{i,j}]=idx++;
                    if(grid[i][j]==1)
                        startPos=id[{i,j}];
                    if(grid[i][j]==2)
                        endPos=id[{i,j}];
                }
            }
        }
        endMask=(1<<idx)-1;
        vector<vector<int>> adj(idx);
        int dirX[4]={1,-1,0,0},dirY[4]={0,0,1,-1};
        for(auto &[p,u]:id){
            int x=p.first,y=p.second;
            for(int d=0;d<4;d++){
                int nx=x+dirX[d],ny=y+dirY[d];
                if(id.count({nx,ny}))
                    adj[u].push_back(id[{nx,ny}]);
            }
        }
        return dfs(startPos,1<<startPos,adj);;
    }
};