class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int r = 0, l = 0, max_f = 0, max_len = 0;
        vector<int> v(26,0);
        while(r < n) {
            v[s[r] - 'A']++;
            max_f = max(max_f,v[s[r] - 'A']); 
            while((r - l + 1) - max_f > k) {
                v[s[l] - 'A']--;
                max_f = 0;
                for(int i=0; i<26; i++) {
                    max_f = max(max_f,v[i]);
                }
                l++;
            }
            if((r - l + 1) - max_f <= k) max_len = max(max_len,(r-l+1));
            r++;
        }
        return max_len;
    }
};