class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(mat[i][j] == 0) {
                    q.push({{i,j},0});
                    visited[i][j] = 1;
                }
            }
        }
        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int d = q.front().second;
            q.pop();
            ans[r][c] = d;
            if(r > 0 && !visited[r-1][c]) {
                q.push({{r-1,c},d+1});
                visited[r-1][c] = 1;
            }
            if(r+1 < n && !visited[r+1][c]) {
                q.push({{r+1,c},d+1});
                visited[r+1][c] = 1;
            }
            if(c > 0 && !visited[r][c-1]) {
                q.push({{r,c-1},d+1});
                visited[r][c-1] = 1;
            }
            if(c+1 < m && !visited[r][c+1]) {
                q.push({{r,c+1},d+1});
                visited[r][c+1] = 1;
            }
        }
        return ans;
    }
};