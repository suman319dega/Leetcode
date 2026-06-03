class Solution {
public:
    int digitFrequencyScore(int n) {
        int x = n;
        map<int,int> m;
        while(x != 0) {
            int last = x % 10;
            m[last]++;
            x = x / 10;
        }
        int ans = 0;
        for(auto val : m) {
            int a = val.first;
            int b = val.second;
            ans += a * b;
        }
        return ans;

    }
};