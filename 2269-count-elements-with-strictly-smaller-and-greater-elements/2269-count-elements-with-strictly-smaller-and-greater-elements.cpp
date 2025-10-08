class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        int min_count = 0, max_count = 0;
        for(int num : nums) {
            if(num == maxi) max_count++;
            if(num == mini) min_count++;
        }
        if(mini == maxi) return 0;
        return  n - max_count - min_count;
    }
};