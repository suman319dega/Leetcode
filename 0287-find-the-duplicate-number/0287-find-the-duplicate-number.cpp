class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num : nums) {
            m[num]++;
        }
        for(auto val : m) {
            if(val.second > 1) return val.first;
        }
        return -1;
    }
};