class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int num : nums) {
           if(m.find(num) != m.end()) return true;
           else m[num]++;
        }
        return false;
        
    }
};