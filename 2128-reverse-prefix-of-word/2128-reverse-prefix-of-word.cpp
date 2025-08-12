
void rev(string &s,int i, int n) {
    if(i == n/2) return;
    swap(s[i],s[n-i-1]);
    rev(s,i+1,n);
}

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int id = 0;
        for(int i=0; i<n; i++) {
            if(word[i] == ch) {
                id = i+1;
                break;
            }
        }
        rev(word,0,id);
        return word;
    }
};