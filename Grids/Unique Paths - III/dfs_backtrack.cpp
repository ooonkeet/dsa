class Solution {
public:
    int m,n,totalCells,result=0;
    vector<vector<int>> gridF;
    vector<vector<bool>> visited;
    void dfs(int x,int y,int count){
        if(gridF[x][y]==2){
            if(count==totalCells)
                result++;
            return;
        }
        int dirx[4]={1,-1,0,0};
        int diry[4]={0,0,1,-1};
        for(int d=0;d<4;d++){
            int nx=x+dirx[d];
            int ny=y+diry[d];
            if(nx>=0 && nx<m && ny>=0 && ny<n && !visited[nx][ny] && gridF[nx][ny]!=-1){
                visited[nx][ny]=true;
                dfs(nx,ny,count+1);
                visited[nx][ny]=false;
            }
        }
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        gridF=grid;
        m=gridF.size();
        n=gridF[0].size();
        visited.assign(m,vector<bool>(n,false));
        int stX,stY;
        totalCells=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(gridF[i][j]!=-1)
                    totalCells++;
                if(gridF[i][j]==1){
                    stX=i;
                    stY=j;
                }
            }
        }
        visited[stX][stY]=true;
        dfs(stX,stY,1);
        return result;
    }
};