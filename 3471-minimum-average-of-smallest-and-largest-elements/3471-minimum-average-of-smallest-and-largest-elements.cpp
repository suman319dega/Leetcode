class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans = INT_MAX;
        int low = 0 , high = nums.size() - 1;
        sort(nums.begin(),nums.end());
        while(low <= high) {
            double avg = (nums[low] + nums[high]) / 2.0;
            ans = min(ans,avg);
            low++,high--;
        }
        return ans;
    }
};