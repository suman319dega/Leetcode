class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num : nums) m[num]++;
        for(int num : nums) {
            if(num % 2 == 0) {
                if(m[num] == 1) return num;
            }
        }
        return -1;
    }
};