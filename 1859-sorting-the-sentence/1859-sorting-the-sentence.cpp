class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        vector<string> v;
        string word;
        while(ss >> word) {
            v.push_back(word);
        }
        unordered_map<int,string> m;
        for(string x : v) {
            for(char ch : x) {
                if(isdigit(ch)) {
                    int n = x.size();
                    int a = ch - '0';
                    m[a] = x.substr(0,n-1);                
                }
            }
        }
        string ans = "";
        int b = v.size();
        int count = 1;
        while(count <= b) {
            ans += m[count] + " ";
            count++;
        }
        ans.pop_back();
        return ans;

    }
};