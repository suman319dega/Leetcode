class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n = nums.size();
        if(n % 2 != 0) return false;
        map<int,int> m;
        for(int num : nums) m[num]++;
        for(int num : nums) {
            if(m[num] > 2) return false;
        }
        return true;

    }
};