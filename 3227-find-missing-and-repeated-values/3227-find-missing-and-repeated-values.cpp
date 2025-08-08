class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> freq(n*n);
        int rep = -1,mis = -1;
        for(auto nums: grid) {
            for(int num : nums) {
                freq[num-1] += 1;
            }
        }
        for(int i=0; i<n*n; i++) {
            if(freq[i] == 2) rep = i+1;
            else if(freq[i] == 0) mis = i+1;
        }
        return {rep,mis};
    }
};