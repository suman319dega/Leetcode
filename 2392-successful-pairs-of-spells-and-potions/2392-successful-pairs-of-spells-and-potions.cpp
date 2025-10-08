class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());
        int n = potions.size();

        for (long long spell : spells) {
            long long need = (success + spell - 1) / spell;

            int left = 0, right = n - 1, index = n;
            while (left <= right) {
                int mid = (left + right) / 2;
                if (potions[mid] >= need) {
                    index = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            
            ans.push_back(n - index);
        }

        return ans;
    }
};
