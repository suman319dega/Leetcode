class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> m;
        for(int i=1; i<=nums.size(); i++) m[i] = 0;
        for(int num : nums) m[num]++;
        vector<int> ans;
        for(auto val : m) {
            if(val.second == 0) ans.push_back(val.first);
        }
        return ans;
    }
};