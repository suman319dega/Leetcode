class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos,neg;
        vector<int> ans(n);
        for(int num : nums) {
            if(num < 0) {
                neg.push_back(num);
            }
            else pos.push_back(num);
        }
        int a = 0, b = 0;
        for(int i=0; i<n; i++) {
            if(i%2 == 0) {
                ans[i] = pos[a++];
            }
            else ans[i] = neg[b++];
        }
        return ans;
    }
};