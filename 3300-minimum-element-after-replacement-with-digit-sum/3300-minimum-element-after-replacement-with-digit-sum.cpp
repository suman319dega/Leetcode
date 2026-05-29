class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        for(int num : nums) {
            int x = 0;
            while(num != 0) {
                int last = num % 10;
                x = x + last;
                num = num / 10;
            }
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};