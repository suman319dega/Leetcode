class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        set<string> stores;
        stores.insert(s);

        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (isalpha(s[i])) {
                set<string> temp = stores; 

                for (auto str : temp) {
                    string t = str;
                    if (islower(t[i]))
                        t[i] = toupper(t[i]);
                    else
                        t[i] = tolower(t[i]);
                    stores.insert(t);
                }
            }
        }

        vector<string> ans(stores.begin(), stores.end());
        return ans;
    }
};
