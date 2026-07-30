class Solution {
    public void dfs(int i,int [][] grid,boolean[] visited) {
        visited[i] = true;
        for(int x=0; x<grid[i].length; x++) {
            if(!visited[x] && grid[i][x] == 1) {
                dfs(x,grid,visited);
            }
        }
    }
    public int findCircleNum(int[][] grid) {
        int n = grid.length;
        boolean visited[] = new boolean[n];
        int count = 0;
        for(int i=0; i<n; i++) {
            if(!visited[i] ) {
                ++count;
                dfs(i,grid,visited);
            }
        }
        return count;
    }
}