#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
        string ans = "";
        for(char ch : s) {
            if(ch != '0') {
                ans += ch;
            }
        }
        if(ans.empty()) return 0;
        long long num = stoll(ans);
        return num;
    }
};