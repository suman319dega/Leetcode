class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int bob = 1, alice = 0;
        vector<int> ans;
        while(bob < nums.size()) {
            ans.push_back(nums[bob]);
            ans.push_back(nums[alice]);
            bob += 2, alice += 2;
        }
        return ans;
    }
};