class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> prev(n),curr(n);
        for(int i=0;i<n;i++)
            prev[i]=grid[0][i];
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                curr[j]=INT_MAX;
                for(int k=0;k<n;k++){
                    int from=grid[i-1][k];
                    curr[j]=min(curr[j],prev[k]+moveCost[from][j]+grid[i][j]);
                }
            }
            prev=curr;
        }
        return *min_element(begin(prev),end(prev));
    }
};