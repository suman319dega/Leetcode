bool isprime(int x) {
    if(x < 2) return false;
    for(int i=2; i*i<=x; i++) {
        if(x%i == 0) return false;
    }
    return true;
}

class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num : nums) m[num]++;
        for(auto val : m) {
            int x = val.second;
            if(isprime(x)) return true;
        }
        return false;
    }
};