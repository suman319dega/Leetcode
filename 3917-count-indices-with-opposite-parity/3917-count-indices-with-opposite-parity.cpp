class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++) {
            int even = 0, odd = 0;
            for(int j=i+1; j<n; j++) {
                if(nums[i] % 2 == 0 ) {
                    if(nums[j] % 2 != 0) odd++;
                }
                else {
                    if(nums[j] % 2 == 0) even++;
                }
            }
            if(nums[i] % 2 == 0) ans.push_back(odd);
            else ans.push_back(even);
        }
        return ans;

    }
};