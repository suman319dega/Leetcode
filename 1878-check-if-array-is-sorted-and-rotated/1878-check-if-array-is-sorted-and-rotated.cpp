class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=0; i<n-1; i++) {
            if(nums[i] > nums[i+1]) count++;
        }
        if(nums[0] < nums[n-1]) count++;
        return count <=1;
    }
};