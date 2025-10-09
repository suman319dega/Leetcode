class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++) {
            int id = abs(nums[i]) - 1;
            if(nums[id] < 0) {
                ans.push_back(id + 1);
            }
            else {
                nums[id] = -nums[id];
            }
        }
        return ans;
    }
};