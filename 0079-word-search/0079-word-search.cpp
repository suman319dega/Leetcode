class Solution {
public:
    bool dfs(int i, int j, int id, int n, int m, vector<vector<int>> &visited,vector<vector<char>>& board, string &word) {

        if (id == word.size()) return true;
        if (i < 0 || j < 0 || i >= n || j >= m) return false; 
        if (board[i][j] != word[id] || visited[i][j]) return false; 

        visited[i][j] = 1;

        bool found =
            dfs(i + 1, j, id + 1, n, m, visited, board, word) ||
            dfs(i - 1, j, id + 1, n, m, visited, board, word) ||
            dfs(i, j + 1, id + 1, n, m, visited, board, word) ||
            dfs(i, j - 1, id + 1, n, m, visited, board, word);

        visited[i][j] = 0;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0]) {
                    if (dfs(i, j, 0, n, m, visited, board, word)) {
                        return true; 
                    }
                }
            }
        }
        return false;
    }
};
