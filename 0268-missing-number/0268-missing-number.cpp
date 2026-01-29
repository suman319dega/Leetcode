class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long  sum1 = 0;
        for(int num : nums) sum1 += num;
        long long sum2 = (n * (n+1)) / 2;
        return abs(sum1 - sum2);
        
    }
};