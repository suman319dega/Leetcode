class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> m;
        for(string s : arr) {
            m[s] += 1;
        }
        vector<string> v;
        for(string s : arr) {
            if(m[s] == 1) {
                v.push_back(s);
            }
        }
        if(k > v.size()) return "";
        else return v[k-1];
    }
};