class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> arr;
        string str;
        while(ss >> str) {
            arr.push_back(str);
        }
        reverse(arr.begin(),arr.end());
        string sent = "";
        for(string a : arr) {
            sent = sent + a + " ";
        }
        sent.pop_back();
        return sent;
    }
};