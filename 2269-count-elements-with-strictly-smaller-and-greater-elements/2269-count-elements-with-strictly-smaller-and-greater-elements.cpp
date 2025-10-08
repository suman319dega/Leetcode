class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int mini = nums[0], maxi = nums[n-1];
        int count = 0;
        for(int i=1; i<n-1; i++) {
            if(nums[i] > mini && nums[i] < maxi) count++;
        }
        return count;
    }
};