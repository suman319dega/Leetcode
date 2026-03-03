class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int ans = 0;
        for(auto ch : s)  {
            if(ch == '(') count++;
            else if(count == 0)  ans++;
            else count--;
        }
        ans += count;
        return ans;
    }
};