class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++) {
            int id = abs(nums[i]) - 1;
            if(nums[id] > 0) nums[id] = - nums[id];
        }
        vector<int> ans;
        for(int i=0; i<n; i++) {
            if(nums[i] > 0) ans.push_back(i+1);
        }
        return ans;
    }
};