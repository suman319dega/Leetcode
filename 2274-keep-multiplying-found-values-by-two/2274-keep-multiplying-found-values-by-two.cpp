class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int,int> m;
        for(int num : nums) m[num]++;
        while(m.find(original) != m.end()) {
            original *= 2;
        }
        return original;
    }
};