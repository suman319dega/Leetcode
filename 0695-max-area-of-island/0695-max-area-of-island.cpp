int dfs(int r,int c,vector<vector<int>>& grid) {
    if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == 0) return 0;
    grid[r][c] = 0;
    int ans = 1;
    ans += dfs(r+1,c,grid);
    ans += dfs(r-1,c,grid);
    ans += dfs(r,c+1,grid);
    ans += dfs(r,c-1,grid);

    return ans;
}

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1) {
                    ans =max(ans, dfs(i,j,grid));
                }
            }
        }
        return ans;
    }
};