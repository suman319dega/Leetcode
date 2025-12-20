class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        for(int  num : nums) {
            if(num == 0) count0++;
            else if(num == 1) count1++;
            else count2++;
        }
        int i = 0;
        while(count0 --> 0) nums[i++] = 0;
        while(count1 --> 0) nums[i++] = 1;
        while(count2 --> 0) nums[i++] = 2;
    }
};