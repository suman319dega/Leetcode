class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int temp = nums[n-1];
        vector<int> prefix(n);
        prefix[n-1] = temp;
        for(int i=n-2; i>=0; i--) {
            prefix[i] = nums[i] + prefix[i+1];
        }
        int suff = nums[0];
        int count = 0;
        for(int i=1; i<n; i++) {
            int sum = suff - prefix[i];
            if(sum % 2 == 0) count++;
            suff += nums[i];
        }
        return count;
    }
};