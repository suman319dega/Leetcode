class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 = {'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2 = {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3 = {'z','x','c','v','b','n','m'};

        vector<string> ans;
        for(string s : words) {
            int c1 = 0,c2 = 0,c3 = 0;
            for(char ch : s) {
                char c = tolower(ch);
                if(row1.count(c)) c1++;
                if(row2.count(c)) c2++;
                if(row3.count(c)) c3++;
            }
            int len = s.size();
            if(c1 == len || c2 == len || c3 == len) ans.push_back(s);
        }
        return ans;
    }
};