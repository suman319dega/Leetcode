class Solution {
    public void dfs(int i,int j,int[][] visited,char[][] grid, int n, int m) {
        if(grid[i][j] == '0') return;
        visited[i][j] = 1;
        if(i > 0 && visited[i-1][j] == 0 && grid[i-1][j] == '1') {
            dfs(i-1,j,visited,grid,n,m);
        }
        if(i < n-1 && visited[i+1][j] == 0 && grid[i+1][j] == '1') {
            dfs(i+1,j,visited,grid,n,m);
        }
        if(j > 0 && visited[i][j-1] == 0 && grid[i][j-1] == '1') {
            dfs(i,j-1,visited,grid,n,m);
        }
        if(j < m-1 && visited[i][j+1] == 0 && grid[i][j+1] == '1') {
            dfs(i,j+1,visited,grid,n,m);
        }
    }

    public int numIslands(char[][] grid) {
        int n = grid.length, m = grid[0].length;
        int count = 0;
        int[][] visited = new int[n][m];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == '1' && visited[i][j] == 0) {
                    dfs(i,j,visited,grid,n,m);
                    count++;
                }
            }
        }
        return count;
    }
}