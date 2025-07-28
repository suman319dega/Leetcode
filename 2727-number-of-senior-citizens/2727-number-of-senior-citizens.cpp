class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(string s : details) {
            int res = stoi(s.substr(11,2));
            if(res > 60) count += 1;
        }
        return count;
    }
};