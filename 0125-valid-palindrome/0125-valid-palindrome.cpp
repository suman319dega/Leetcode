class Solution {
public:
    bool isPalindrome(string s) {
        string filter = "";
        for(char ch : s) {
            if(isalnum(ch)) {
                filter += tolower(ch);
            }
        }
        int n = filter.size();
        int low = 0, high = n-1;
        while(low < high) {
            if(filter[low] != filter[high]) {
                return false;
            }
            low++,high--;
        }
        return true;
    }
};