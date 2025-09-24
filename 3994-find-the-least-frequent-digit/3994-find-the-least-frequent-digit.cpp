class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int> m;
        while(n > 0) {
            int dig = n % 10;
            m[dig] += 1;
            n = n / 10;
        }
        int fre = INT_MAX;
        for(auto p : m) {
            fre = min(fre,p.second);
        }
        int ans = INT_MAX;
        for(auto p : m) {
            if(p.second == fre) {
                ans = min(ans,p.first);
            }
        }
        return ans;
    }
};