class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n*n;
        vector<int> freq(total+1, 0);
        int m = -1, r = -1;
        for(auto row : grid) {
            for(int num : row) {
                freq[num] += 1;
                if(freq[num] == 2) r = num;
            }
        }
        for(int i=1; i<=total; i++) {
            if(freq[i] == 0){
                m = i;
                break;
            }
        }
        return {r,m};
    }
};