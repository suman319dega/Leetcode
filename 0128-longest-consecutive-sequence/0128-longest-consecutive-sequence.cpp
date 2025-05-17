class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int count;
        int maxi = 0;
        for(auto num : s) {
            if(s.find(num-1) == s.end()) {
                count = 1;
                int x = num + 1;
                while(s.find(x) != s.end()) {
                    count++;
                    x++;
                }
                maxi = max(maxi,count);
            }
        }
        return maxi;
    }
};