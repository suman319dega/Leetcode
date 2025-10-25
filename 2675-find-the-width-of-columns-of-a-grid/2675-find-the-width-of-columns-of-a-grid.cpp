class Solution {
public:
    int len(int n) {
        if(n == 0) return 1;      
        int count = 0;
        if(n < 0) {              
            n = -n;
            count++;              
        }
        while(n > 0) {
            n /= 10;
            count++;
        }
        return count;
    }

    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n = grid.size();          
        int m = grid[0].size();       
        vector<int> ans;

        for(int j = 0; j < m; j++) { 
            int max_len = 0;
            for(int i = 0; i < n; i++) {
                max_len = max(max_len, len(grid[i][j]));
            }
            ans.push_back(max_len);
        }

        return ans;
    }
};
