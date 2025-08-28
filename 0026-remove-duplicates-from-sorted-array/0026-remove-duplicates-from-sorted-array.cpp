class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        for(int j=0; j<nums.size()-1; j++) {
            if(nums[j] != nums[j+1]) {
                nums[i] = nums[j+1];
                i += 1;
            }
        }
        return i;
    }
};