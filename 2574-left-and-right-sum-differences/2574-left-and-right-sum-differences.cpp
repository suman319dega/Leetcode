class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> v1(n,0),v2(n,0),ans(n,0);
        int sum1 = nums[0], sum2 = nums[n-1];
        for(int i=1; i<n; i++) {
            v1[i] = sum1;
            sum1 += nums[i];
        }

        for(int i=n-2; i>=0; i--) {
            v2[i] = sum2;
            sum2 += nums[i];
        }

        for(int i=0; i<n; i++) {
            ans[i] = abs(v1[i] - v2[i]);
        }
        return ans;
    }
};