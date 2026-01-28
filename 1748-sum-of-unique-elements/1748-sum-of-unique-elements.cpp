class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num : nums) m[num]++;
        int sum = 0;
        for(auto x : m) {
            if(x.second == 1) sum += x.first;
        }
        return sum;
    }
};