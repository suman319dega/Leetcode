class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0, n = nums.size();
        int mini = nums[0], maxi = nums[n-1];
        for(int i=1; i<n-1; i++) {
            if(nums[i] < maxi && nums[i] > mini) count++;
        }
        return count;
    }
};