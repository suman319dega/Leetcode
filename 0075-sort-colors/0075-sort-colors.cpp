class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1 = 0,count2 = 0,count3 = 0;
        for(int num : nums) {
            if(num == 0) count1 += 1;
            else if(num == 1) count2 += 1;
            else if(num == 2) count3 += 1;
        }
        int zeros = count1,ones = count1 + count2, twos = ones + count3;
        for(int i=0; i<zeros; i++){
            nums[i] = 0;
        }
        for(int i=zeros; i<ones; i++) {
            nums[i] = 1;
        }
        for(int i=ones; i<twos; i++) {
            nums[i] = 2;
        }
    }
};