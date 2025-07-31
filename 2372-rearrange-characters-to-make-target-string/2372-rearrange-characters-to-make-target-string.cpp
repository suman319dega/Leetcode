class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char,int> freq,freqt;
        for(char ch : s) {
            freq[ch] += 1;
        }
        for(char ch : target) {
            freqt[ch] += 1;
        }
        int mini = INT_MAX;
        for(auto k : freqt) {
            char a = k.first;
            int b = k.second;
            
            if(freq.find(a) == freq.end()) return 0;
            mini = min(mini,freq[a] / b);
        }
        return mini;
    }
};