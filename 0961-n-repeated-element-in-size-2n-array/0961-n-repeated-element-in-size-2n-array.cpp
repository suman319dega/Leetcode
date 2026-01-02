class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++) {
            m[nums[i]] += 1;
        }
        int n = nums.size() / 2;
        for(auto val : m) {
            int a = val.first;
            int b = val.second;
            if(b == n) return a;
        }
        return -1;
    }
};