class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int  j = 0;
        int sum = 0;
        for(int i=0; i<mat.size(); i++) {
            sum += mat[i][j];
            j++;
        }
        int i = mat[0].size()-1;
        for(int k=0; k<mat.size(); k++) {
            sum += mat[k][i];
            i--;
        }
        if(n % 2 == 1) {
            sum -= mat[n/2][n/2];
        }
        return sum;
    }
};