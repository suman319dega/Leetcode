class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> m;
        int count = 0;
        for(int num : nums) {
            m[num] += 1;
            count = max(m[num],count);
        }
        int recount = 0;
        for(auto el : m) {
            int a = el.second;
            if(a == count) recount += 1;
        }
        return recount * count;
    }
};