class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++) {
            int cur = target - nums[i];
            if(m.find(cur) != m.end()){
                return {i,m[cur]};

            }
            else m[nums[i]] = i;
        }
        return {-1,-1};
    }
};