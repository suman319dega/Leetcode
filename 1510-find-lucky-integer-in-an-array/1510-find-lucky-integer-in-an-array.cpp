class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> m;
        for(int num : arr) {
            m[num] += 1;
        }
        int ans = -1;
        for(auto val : m) {
            int a = val.first;
            int b = val.second;
            if(a == b) ans = max(ans,a);
        }
        return ans;
    }
};