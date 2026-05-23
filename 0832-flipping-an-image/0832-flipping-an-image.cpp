class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        for(auto &nums : image) {
            reverse(nums.begin(),nums.end());
            vector<int> temp;
            for(int num : nums) {
                if(num == 0) temp.push_back(1);
                else temp.push_back(0);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};