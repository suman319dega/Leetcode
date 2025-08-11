class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end()); 
        int maxK = -1;

        for (int num : nums) {
            if (num > 0 && s.count(-num)) {
                maxK = max(maxK, num);
            }
        }
        return maxK;
    }
};