class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 1;
        int ans = INT_MIN;

        while (i < n - 1) {  
            if (j < n) {
                int a = nums[i], b = nums[j];
                int pro = (a - 1) * (b - 1);
                ans = max(ans, pro);
                j++;
            } else {
                i++;
                j = i + 1; 
            }
        }
        return ans;
    }
};
