class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        for(int i=0; i<n; i++) {
            for(int j=m-1; j>=0; j--) {
                ans[i][j] = matrix[j][i];
            }
        }
        for(int i=0; i<n; i++) {
            reverse(ans[i].begin(),ans[i].end());
            for(int j=0; j<m; j++) {
                matrix[i][j] = ans[i][j];
            }
        }
        
    }
};