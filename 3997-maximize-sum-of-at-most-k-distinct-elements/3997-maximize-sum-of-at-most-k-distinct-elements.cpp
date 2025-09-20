class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        if (n == 0 || k == 0) return ans;
        sort(nums.rbegin(), nums.rend());

        int i = 0;
        while (i < n && k > 0) {
            if (ans.empty() || nums[i] != ans.back()) {
                ans.push_back(nums[i]);
                k--;
            }
            i++;
        }

        return ans;
    }
};
