class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] == -1) {
                    int maxi = INT_MIN;
                    for(int k=0; k<n; k++) {
                        maxi = max(matrix[k][j],maxi);
                    }
                    matrix[i][j] = maxi;
                }
            }
        }
        return matrix;
    }
};