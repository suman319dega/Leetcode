class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x = nums.size();
        vector<int> ans(x);
        int j = 0;
        for(int i=0; i<x; i++) {
            if(i % 2 != 0) {
                ans[i] = nums[n++];
            }
            else ans[i] = nums[j++];
        }
        return ans;
    }
};