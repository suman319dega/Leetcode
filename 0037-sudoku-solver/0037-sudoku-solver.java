class Solution {
    public boolean isValid(char[][] board, int row, int col, char ch) {

        // Check row
        for(int j = 0; j < 9; j++) {
            if(board[row][j] == ch)
                return false;
        }

        // Check column
        for(int i = 0; i < 9; i++) {
            if(board[i][col] == ch)
                return false;
        }

        // Check 3 x 3 box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for(int i = startRow; i < startRow + 3; i++) {
            for(int j = startCol; j < startCol + 3; j++) {

                if(board[i][j] == ch)
                    return false;
            }
        }

        return true;
    }

    public boolean solve(char[][] board) {

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {

                if(board[i][j] == '.') {

                    for(char ch = '1'; ch <= '9'; ch++) {

                        if(isValid(board, i, j, ch)) {

                            // Take
                            board[i][j] = ch;

                            // Recursion
                            if(solve(board))
                                return true;

                            // Undo
                            board[i][j] = '.';
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }

    public void solveSudoku(char[][] board) {
        solve(board);
    }
}