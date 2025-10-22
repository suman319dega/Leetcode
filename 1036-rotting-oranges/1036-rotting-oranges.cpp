class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        int max_dis = INT_MIN;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 2) {
                    q.push({{i,j},0});
                    visited[i][j] = 1;
                }
            }
        }
        while(!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int d = q.front().second;
            q.pop();
            max_dis = max(d,max_dis);
            if(row > 0 && grid[row-1][col] == 1 && !visited[row-1][col]) {
                q.push({{row-1,col},d+1});
                visited[row-1][col] = 1;
            }
            if(row+1 < n && grid[row+1][col] == 1 && !visited[row+1][col]) {
                q.push({{row+1,col},d+1});
                visited[row+1][col] = 1;
            }
            if(col > 0 && grid[row][col-1] == 1 && !visited[row][col-1]) {
                q.push({{row,col-1},d+1});
                visited[row][col-1] = 1;
            }
            if(col+1 < m && grid[row][col+1] == 1 && !visited[row][col+1]) {
                q.push({{row,col+1},d+1});
                visited[row][col+1] = 1;
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1 && !visited[i][j]) return -1;
            }
        }
        return (max_dis == INT_MIN) ? 0 : max_dis;
    }
};