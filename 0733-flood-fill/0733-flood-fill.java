class Solution {
    public void dfs(int i,int j,int [][] image,int [][] visited,int color,int n,int m,int x) {
        if(i > n-1 || j > m-1) return;
        visited[i][j] = 1;
        image[i][j] =  color;
        if(i > 0 && image[i-1][j] == x && visited[i-1][j] != 1) {
            dfs(i-1,j,image,visited,color,n,m,x);
        }
        if(i < n-1 && image[i+1][j] == x && visited[i+1][j] != 1) {
            dfs(i+1,j,image,visited,color,n,m,x);
        }
        if(j > 0 && image[i][j-1] == x && visited[i][j-1] != 1) {
            dfs(i,j-1,image,visited,color,n,m,x);
        }
        if(j < m-1 && image[i][j+1] == x && visited[i][j+1] != 1) {
            dfs(i,j+1,image,visited,color,n,m,x);
        }
    }
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int n = image.length;
        int m = image[0].length;
        int visited[][] = new int[n][m];
        int x = image[sr][sc];
        dfs(sr,sc,image,visited,color,n,m,x);
        return image;
    }
}