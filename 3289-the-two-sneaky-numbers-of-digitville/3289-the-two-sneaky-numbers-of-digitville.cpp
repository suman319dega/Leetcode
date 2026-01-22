class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num : nums) m[num]++;
        int a = 0, b = 0;
        for(auto val : m) {
            int x = val.first;
            int y = val.second;
            if(y >= 2) {
                if(a == 0)  a = x;
                else b = x;
            } 
        }
        return {a,b};
    }
};