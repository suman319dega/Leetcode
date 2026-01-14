void dfs(int n,int m,int i,int j,long long &sum,vector<vector<int>>& visited,vector<vector<int>>& grid) {
    sum += grid[i][j];
    visited[i][j] = 1;
    if(i-1 >= 0 && grid[i-1][j] != 0 && !visited[i-1][j]) {
        dfs(n,m,i-1,j,sum,visited,grid);
    }
    if(i+1 < n && grid[i+1][j] != 0 && !visited[i+1][j]) {
        dfs(n,m,i+1,j,sum,visited,grid);
    }
    if(j-1 >= 0 && grid[i][j-1] != 0 && !visited[i][j-1]) {
        dfs(n,m,i,j-1,sum,visited,grid);
    }
    if(j+1 < m && grid[i][j+1] != 0 && !visited[i][j+1]) {
        dfs(n,m,i,j+1,sum,visited,grid);
    }
}

class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int count = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                long long sum = 0;
                if(grid[i][j] != 0 && !visited[i][j]) {
                    dfs(n,m,i,j,sum,visited,grid);
                    if(sum % k == 0) count++;
                }
            }
        }
        return count;
    }
};