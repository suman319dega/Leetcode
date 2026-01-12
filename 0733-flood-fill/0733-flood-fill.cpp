class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size(), m = image[0].size();
        int x = image[sr][sc];
        if(x == color) return image;

        queue<pair<int,int>> q;
        q.push({sr, sc});
        image[sr][sc] = color;

        while(!q.empty()) {
            int a = q.front().first;
            int b = q.front().second;
            q.pop();

            if(a-1 >= 0 && image[a-1][b] == x) {
                image[a-1][b] = color;
                q.push({a-1, b});
            }
            if(a+1 < n && image[a+1][b] == x) {
                image[a+1][b] = color;
                q.push({a+1, b});
            }
            if(b-1 >= 0 && image[a][b-1] == x) {
                image[a][b-1] = color;
                q.push({a, b-1});
            }
            if(b+1 < m && image[a][b+1] == x) {
                image[a][b+1] = color;
                q.push({a, b+1});
            }
        }
        return image;
    }
};
