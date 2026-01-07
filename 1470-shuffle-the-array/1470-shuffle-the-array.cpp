class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int n1 = nums.size();
        vector<int> ans(n1);
        int j = 0;
        for(int i=0; i<n; i++) {
            ans[j++] = nums[i];
            ans[j++] = nums[i+n];
        }
        return ans;
    }
};