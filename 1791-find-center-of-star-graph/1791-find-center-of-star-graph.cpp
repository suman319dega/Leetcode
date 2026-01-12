class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> m;
        int max_count = 0;
        for(auto &arr : edges) {
            for(int num : arr) {
                m[num]++;
                max_count = max(max_count,m[num]);
            }
        }
        for(auto &val : m) {
            if(val.second == max_count) return val.first;
        }
        return 0;
    }
};