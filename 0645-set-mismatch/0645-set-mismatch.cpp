class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n+1);
        for(int num : nums) v[num]++;
        int rep = -1, miss = -1;
        for(int i=0; i<=n; i++) {
            if(v[i] == 2) rep = i;
            if(v[i] == 0) miss = i;
        }
        return {rep,miss};
    }
};