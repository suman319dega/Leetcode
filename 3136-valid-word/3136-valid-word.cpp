class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if(n < 3) return false;
        int count1 = 0, count2 = 0;
        for(char ch : word) {
            if(!isalnum(ch)) return false;
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') count1++;
            else if(!isdigit(ch)) count2++;
        }
        return (count1 >= 1) && (count2 >= 1);
    }
};