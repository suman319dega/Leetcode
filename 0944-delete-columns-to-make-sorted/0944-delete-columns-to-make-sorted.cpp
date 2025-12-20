class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        int c = strs.size();
        int r = strs[0].size();
        for(int i=0; i<r; i++) {
            for(int j=1; j<c; j++) {
                if(strs[j][i] < strs[j-1][i]) {
                    count += 1;
                    break;
                }
            }
        }
        return count;
    }
};