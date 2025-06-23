class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = INT_MIN;
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 2) {
                    q.push({{i,j},0});
                    v[i][j] = 1;
                }
            }
        }
        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int d = q.front().second;
            q.pop();
            ans = max(ans,d);
            if(r > 0 && grid[r-1][c] == 1 && !v[r-1][c]) {
                q.push({{r-1,c},d+1});
                v[r-1][c] = 1;
            }
            if(r+1 < n && grid[r+1][c] == 1 && !v[r+1][c]) {
                q.push({{r+1,c},d+1});
                v[r+1][c] = 1;
            }
            if(c > 0 && grid[r][c-1] == 1 && !v[r][c-1]) {
                q.push({{r,c-1},d+1});
                v[r][c-1] = 1;
            }
            if(c+1 < m && grid[r][c+1] == 1 && !v[r][c+1]) {
                q.push({{r,c+1},d+1});
                v[r][c+1] = 1;
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1 && !v[i][j]) return -1;
            }
        }
        if(ans == INT_MIN) return 0;
        else return ans;
    }
};