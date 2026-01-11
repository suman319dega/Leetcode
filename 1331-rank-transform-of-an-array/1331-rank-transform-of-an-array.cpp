class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> nums = arr;
        vector<int> ans(n);
        sort(nums.begin(),nums.end());
        map<int,int> m;
        int rank = 1;
        for(int i=0; i<n; i++) {
            if(m.find(nums[i]) == m.end()) {
                m[nums[i]] = rank++;
            }
        }
        for(int i=0; i<n; i++) {
            ans[i] = m[arr[i]];
        }
        return ans;
    }
};