void dfs(int n, int m,int start,vector<vector<int>>& image,int color, int i, int j) {
    image[i][j] = color;
    if(i > 0 && image[i-1][j] == start) {
        dfs(n,m,start,image,color,i-1,j);
    }
    if(i+1 < n && image[i+1][j] == start) {
        dfs(n,m,start,image,color,i+1,j);
    }
    if(j+1 < m && image[i][j+1] == start) {
        dfs(n,m,start,image,color,i,j+1);
    }
    if(j > 0 && image[i][j-1] == start) {
        dfs(n,m,start,image,color,i,j-1);
    }
}

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int start = image[sr][sc];
        if(start == color) return image;
        dfs(n,m,start,image,color,sr,sc);
        return image;
    }
};