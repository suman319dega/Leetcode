class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> m;
        for(string s : arr) {
            m[s] += 1;
        }
        int count = 0;
        for(string s : arr) {
            if(m[s] == 1) count++;
            if(count == k) return s;
        }
        return "";
    }
};