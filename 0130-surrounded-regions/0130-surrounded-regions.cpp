void dfs(int r,int c,vector<vector<char>>& board,vector<vector<int>> &visited, int n, int m) {
    visited[r][c] = 1;
    if(r > 0 && board[r-1][c] == 'O' && !visited[r-1][c]) {
        dfs(r-1,c,board,visited,n,m);
    }
    if(r+1 < n && board[r+1][c] == 'O' && !visited[r+1][c]) {
        dfs(r+1,c,board,visited,n,m);
    }
    if(c > 0 && board[r][c-1] == 'O' && !visited[r][c-1]) {
        dfs(r,c-1,board,visited,n,m);
    }
    if(c+1 < m && board[r][c+1] == 'O' && !visited[r][c+1]) {
        dfs(r,c+1,board,visited,n,m);
    }
}

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> visited(n,(vector<int>(m,0)));
        for(int i = 0; i < m; i++) {
            if(board[0][i] == 'O' && !visited[0][i]) {
                dfs(0, i, board, visited, n, m);
            }
            if(board[n-1][i] == 'O' && !visited[n-1][i]) {
                dfs(n-1, i, board, visited, n, m);
            }
        }

        for(int i = 0; i < n; i++) {
            if(board[i][0] == 'O' && !visited[i][0]) {
                dfs(i, 0, board, visited, n, m);
            }
            if(board[i][m-1] == 'O' && !visited[i][m-1]) {
                dfs(i, m-1, board, visited, n, m);
            }
        }
        for(int i=1; i<n-1; i++) {
            for(int j=1; j<m-1; j++) {
                if(board[i][j] == 'O' && !visited[i][j]) board[i][j] = 'X';
            }
        }
    }
};