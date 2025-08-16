class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char ch : stones) {
            int i = 0;
            while(i < jewels.size()) {
                if(ch == jewels[i]) count += 1;
                i += 1;
            }
        }
        return count;
    }
};