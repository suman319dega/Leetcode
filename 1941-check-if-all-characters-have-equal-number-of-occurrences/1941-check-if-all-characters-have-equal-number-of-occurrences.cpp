class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> v(26,0), arr;
        for(char ch : s) v[ch-'a']++;
        for(int val : v) {
            if(val != 0) arr.push_back(val);
        }
        for(int i=0; i<arr.size()-1; i++) {
            if(arr[i] != arr[i+1]) return false;
        }
        return true;
    }
};