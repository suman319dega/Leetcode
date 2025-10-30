class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int id = -1;
        for(int i=n-2; i>=0; i--) {
            if(nums[i] < nums[i+1]) {
                id = i;
                break;
            }
        }
        if(id != -1) {
            for(int i=n-1; i>=0; i--) {
                if(nums[i] > nums[id]) {
                    swap(nums[i],nums[id]);
                    break;
                }
            }
        }
        int low = id + 1, high = n-1;
        while(low < high) {
            swap(nums[low++],nums[high--]);
        }
    }
};