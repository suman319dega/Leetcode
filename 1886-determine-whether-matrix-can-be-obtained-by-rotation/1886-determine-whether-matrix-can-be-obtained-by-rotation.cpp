class Solution {
public:
    bool check(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(mat[i][j] != target[i][j]) return false;
            }
        }
        return true;
    }

    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<vector<int>> temp(n, vector<int>(n));

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                temp[j][n-1-i] = mat[i][j];
            }
        }

        mat = temp;
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++) {
            if(check(mat, target)) return true;
            rotate(mat);
        }
        return false;
    }
};