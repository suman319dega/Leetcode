class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> m;
        int count = INT_MIN;
        for(int num : nums) {
            if(num % 2 == 0) {
                m[num]++;
                count = max(count,m[num]);
            }
        }
        int ans = INT_MAX;
        for(auto val : m) {
            if(val.second == count) ans = min(ans,val.first); 
        }
        return (ans == INT_MAX) ? -1 : ans;

    }
};