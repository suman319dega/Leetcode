class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        for(int num : nums) {
            if(num > 0) s.insert(num);
        }
        int target = 1;
        while(true) {
            if(s.find(target) == s.end()) {
                return target;
            }
            target += 1;
        }
        return target;
    }
};