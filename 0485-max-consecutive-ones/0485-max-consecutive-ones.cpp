class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max_count = 0;
        for(int num : nums) {
            if(num == 1) {
                count++;
                max_count = max(count,max_count);
            }
            else count = 0;
        }
        return max_count;
    }
};