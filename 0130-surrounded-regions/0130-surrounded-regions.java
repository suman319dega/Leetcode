class Solution {
    public void dfs(int i, int j, char[][] board, int n, int m) {
        // Mark the boundary-connected 'O' with a temporary placeholder '#'
        board[i][j] = '#';
        
        // Explore 4 directions
        if (i > 0 && board[i-1][j] == 'O') {
            dfs(i-1, j, board, n, m);
        }
        if (i+1 < n && board[i+1][j] == 'O') {
            dfs(i+1, j, board, n, m);
        }
        if (j > 0 && board[i][j-1] == 'O') {
            dfs(i, j-1, board, n, m);
        }
        if (j+1 < m && board[i][j+1] == 'O') {
            dfs(i, j+1, board, n, m);
        }
    }

    public void solve(char[][] board) {
        if (board == null || board.length == 0) return;
        
        int n = board.length;
        int m = board[0].length;
        
        // Step 1: Run DFS from 'O's on the boundary rows (first and last row)
        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O') dfs(0, j, board, n, m);
            if (board[n-1][j] == 'O') dfs(n-1, j, board, n, m);
        }
        
        // Step 1: Run DFS from 'O's on the boundary columns (first and last column)
        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O') dfs(i, 0, board, n, m);
            if (board[i][m-1] == 'O') dfs(i, m-1, board, n, m);
        }
        
        // Step 2: Post-process the entire board
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X'; // Surrounded region -> flip to 'X'
                } else if (board[i][j] == '#') {
                    board[i][j] = 'O'; // Border connected -> revert back to 'O'
                }
            }
        }
    }
}