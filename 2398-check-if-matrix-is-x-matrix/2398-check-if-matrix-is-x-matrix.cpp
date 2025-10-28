class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int i = 0, j = 0;
        while(i < n && j < m) {
            if(grid[i][j] == 0) return false;
            else i++,j++;
        }
        i = 0, j = m-1;
        while(i < n && j >= 0) {
            if(grid[i][j] == 0) return false;
            else i++,j--;
        }
        vector<int> a = grid[0], b = grid[n-1];
        for(int c=1; c<m-1; c++) {
            if(a[c] != 0) return false;
            if(b[c] != 0) return false;
        }
        for (int x = 1; x < n - 1; x++) {
            for (int y = 0; y < m; y++) {
                if (x != y && x + y != n - 1 && grid[x][y] != 0)
                    return false;
            }
        }
        return true;
    }
};