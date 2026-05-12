class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> arr;
        for(int i=0; i<n; i++) {
            arr.insert(arr.begin()+index[i],nums[i]);
        }
        return arr;
    }
};