class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int mini = INT_MAX;
        int n = cards.size();
        map<int,int> m;
        for(int i=0; i<n; i++) {
            int a = cards[i];
            if(m.find(a) != m.end()) {
                mini = min(mini,i-m[a] + 1);
            }
            m[a] = i;
        }
        if(mini == INT_MAX) return -1;
        return mini;
    }
};