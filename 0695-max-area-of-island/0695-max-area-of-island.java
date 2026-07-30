class Solution {
    public int dfs(int i,int j,int[][] grid,int[][] visited,int n,int m) {
        if(i > n || j > m) return 0;
        visited[i][j] = 1;
        int up = 0;
        int down = 0;
        int left = 0;
        int right = 0;
        if(i > 0 && grid[i-1][j] == 1 && visited[i-1][j] != 1) {
            up = dfs(i-1,j,grid,visited,n,m);
        }
        if(i < n-1 && grid[i+1][j] == 1 && visited[i+1][j] != 1) {
            down = dfs(i+1,j,grid,visited,n,m);
        }
        if(j > 0 && grid[i][j-1] == 1 && visited[i][j-1] != 1) {
            left = dfs(i,j-1,grid,visited,n,m);
        }
        if(j < m-1 && grid[i][j+1] == 1 && visited[i][j+1] != 1) {
            right = dfs(i,j+1,grid,visited,n,m);
        }

        return 1 + (up + down + left + right);
    }
    public int maxAreaOfIsland(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int visited[][] = new int[n][m];
        int max_count = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1 && visited[i][j] != 1) {
                    int count = dfs(i,j,grid,visited,n,m);
                    max_count = Math.max(max_count,count);
                }
            }
        }
        return max_count;
    }
}