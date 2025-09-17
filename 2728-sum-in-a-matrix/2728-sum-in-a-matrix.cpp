class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sort(nums[i].rbegin(), nums[i].rend());
        }
        
        for (int j = 0; j < m; j++) {
            int maxi = nums[0][j];
            for (int i = 1; i < n; i++) {
                if (nums[i][j] > maxi)
                    maxi = nums[i][j];
            }
            sum += maxi;
        }
        
        return sum;
    }
};
