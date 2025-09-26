class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros = 0, i = 0, j = 0, max_len = 0;
        while(j < nums.size()) {
            if(nums[j] == 0) zeros++;
            if(zeros > k) {
                if(nums[i] == 0) zeros--;
                i++;
            }
            if(zeros <= k) {
                int len = j - i + 1;
                max_len = max(len,max_len);
            }
            j++;
        }
        return max_len;
    }
};