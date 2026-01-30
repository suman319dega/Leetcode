void dfs(int i,int j,vector<vector<char>>& board,vector<vector<int>>& visited,int n,int m) {
    if(board[i][j] == '.' || visited[i][j]) return;
    visited[i][j] = 1;
    if(i > 0 && board[i-1][j] == 'X' && !visited[i-1][j]) {
        dfs(i-1,j,board,visited,n,m);
    } 
    if(i < n-1 && board[i+1][j] == 'X' && !visited[i+1][j]) {
        dfs(i+1,j,board,visited,n,m);
    } 
    if(j > 0 && board[i][j-1] == 'X' && !visited[i][j-1]) {
        dfs(i,j-1,board,visited,n,m);
    } 
    if(j < m-1 && board[i][j+1] == 'X' && !visited[i][j+1]) {
        dfs(i,j+1,board,visited,n,m);
    } 
}

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int n = board.size(), m = board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int count = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(board[i][j] == 'X' && !visited[i][j]) {
                    dfs(i,j,board,visited,n,m);
                    count++;
                }
            }
        }
        return count;
    }
};