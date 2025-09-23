class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        int n = word1.size(), m = word2.size();
        if(n == 0) return word2;
        if(m == 0) return word1;
        string ans = "";
        while(i < n && j < m) {
            if(i < n) {
                ans += word1[i];
                i++;
            }
            if(j < m) {
                ans += word2[j];
                j++;
            }
        }
        while(i < n) {
            ans += word1[i];
            i++;
        }
        while(j < m) {
            ans += word2[j];
            j++;
        }
        return ans;
    }
};