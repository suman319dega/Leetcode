void dfs(vector<int>& v, vector<vector<int>> &ans,vector<int>& nums,int i) {
    if(i >= nums.size()) {
        ans.push_back(v);
        return;
    }
    v.push_back(nums[i]);
    dfs(v,ans,nums,i+1);
    v.pop_back();
    dfs(v,ans,nums,i+1);
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        dfs(v,ans,nums,0);
        return ans;
    }
};