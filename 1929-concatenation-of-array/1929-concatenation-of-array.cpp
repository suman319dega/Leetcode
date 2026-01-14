class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        int j = (2*n) - 1;
        for(int i=n-1; i>=0; i--) {
            ans[j--] = nums[i];
            ans[i] = nums[i];
        }
        return ans;
    }
};