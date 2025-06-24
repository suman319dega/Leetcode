class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();  
        vector<vector<int>> visited(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1 && !visited[i][0]) {
                q.push({i, 0});
                visited[i][0] = 1;
            }
            if (grid[i][m-1] == 1 && !visited[i][m-1]) {
                q.push({i, m-1});
                visited[i][m-1] = 1;
            }
        }

        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 1 && !visited[0][j]) {
                q.push({0, j});
                visited[0][j] = 1;
            }
            if (grid[n-1][j] == 1 && !visited[n-1][j]) {
                q.push({n-1, j});
                visited[n-1][j] = 1;
            }
        }


        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            if(r > 0 && grid[r-1][c] == 1 && !visited[r-1][c]) {
                q.push({r-1,c});
                visited[r-1][c] = 1;
            }
             if(r+1 < n && grid[r+1][c] == 1 && !visited[r+1][c]) {
                q.push({r+1,c});
                visited[r+1][c] = 1;
            }
             if(c > 0 && grid[r][c-1] == 1 && !visited[r][c-1]) {
                q.push({r,c-1});
                visited[r][c-1] = 1;
            }
             if(c+1 < m && grid[r][c+1] == 1 && !visited[r][c+1]) {
                q.push({r,c+1});
                visited[r][c+1] = 1;
            }

        }
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !visited[i][j]) {
                    count++;
                }
            }
        }

        return count;
    }
};
