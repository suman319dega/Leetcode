class Solution {
public:
    bool hasSameDigits(string s) {
        string a = s;
        while(a.size() != 2) {
            string b = "";
            for(int i=0; i<a.size()-1; i++) {
                int val = (a[i] - '0'  + a[i+1] - '0') % 10;
                b += to_string(val);
            }
            a = b;
        }
        return a[0] == a[1];
    }
};