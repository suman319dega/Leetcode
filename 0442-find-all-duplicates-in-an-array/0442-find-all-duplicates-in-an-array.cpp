class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(int num : nums) {
            m[num]++;
        }
        vector<int> ans;
        for(auto val : m) {
            if(val.second > 1) ans.push_back(val.first);
        }
        return ans;
    }
};