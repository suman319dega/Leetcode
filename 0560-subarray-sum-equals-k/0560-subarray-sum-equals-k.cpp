class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        m[0] = 1;
        int count = 0, sum = 0;
        for(int num : nums) {
            sum += num;
            if(m.find(sum - k) != m.end()) {
                count += m[sum - k];
            }
            m[sum] += 1;
        }
        return count;
    }
};
