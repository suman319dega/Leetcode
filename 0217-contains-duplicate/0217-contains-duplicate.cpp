class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int num : nums) {
            m[num]++;
        }
        for(auto val : m) {
            if(val.second > 1) return true;
        }
        return false;
    }
};