class Solution {
    public int orangesRotting(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int visited[][] = new int[n][m];
        Queue<int[]> queue = new LinkedList<>();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 2) {
                    queue.offer(new int[]{i,j,0});
                    visited[i][j] = 1;
                }
            }
        }
        int maxi = 0; 
        while(!queue.isEmpty()) {
            int x[] = queue.peek();
            int r = x[0];
            int c = x[1];
            int t = x[2];

            maxi = Math.max(t,maxi);
            queue.poll();

            if(r > 0 && grid[r-1][c] == 1 && visited[r-1][c] != 1) {
                visited[r-1][c] = 1; 
                queue.offer(new int[]{r-1,c,t+1});
            }

            if(r < n-1 && grid[r+1][c] == 1 && visited[r+1][c] != 1) {
                visited[r+1][c] = 1;
                queue.offer(new int[]{r+1,c,t+1});
            }

            if(c > 0 && grid[r][c-1] == 1 && visited[r][c-1] != 1) {
                visited[r][c-1] = 1; 
                queue.offer(new int[]{r,c-1,t+1});
            }

            if(c < m-1 && grid[r][c+1] == 1 && visited[r][c+1] != 1) {
                visited[r][c+1] = 1; 
                queue.offer(new int[]{r,c+1,t+1});
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1 && visited[i][j] != 1) return -1;
            }
        }
        return maxi;
    }
}