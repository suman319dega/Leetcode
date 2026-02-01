class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int x = nums[0];
        vector<int> temp;
        for(int i=1; i<n; i++) {
            temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        int sum = x;
        for(int i=0; i<2; i++) {
            sum += temp[i];
        }
        return sum;
    }
};