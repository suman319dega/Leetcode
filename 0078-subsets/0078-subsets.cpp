void sub(int i,vector<vector<int>>& ans,vector<int>&v, vector<int>& nums,int n) {
    if(i >= n) {
        ans.push_back(v);
        return;
    }
    v.push_back(nums[i]);
    sub(i+1,ans,v,nums,n);
    v.pop_back();
    sub(i+1,ans,v,nums,n);
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i = 0,n = nums.size();
        vector<vector<int>> ans;
        vector<int> v;
        sub(i,ans,v,nums,n);
        return ans;
    }
};