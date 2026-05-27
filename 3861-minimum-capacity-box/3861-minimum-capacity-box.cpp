class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        vector<int> temp = capacity;
        sort(temp.begin(),temp.end());
        int n = capacity.size();
        int ans = 0;
        for(int i=0; i<n; i++) {
            if(temp[i] >= itemSize) {
                ans = temp[i];
                break;
            }
        }
        if(ans == 0) return -1;
        for(int i=0; i<n; i++) {
            if(capacity[i] == ans) return i;
        }
        return -1;
    }
};