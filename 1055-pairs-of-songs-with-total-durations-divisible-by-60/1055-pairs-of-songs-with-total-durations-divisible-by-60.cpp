class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0,n = time.size();
        vector<int> rem_values(60,0);
        for(int num : time) {
            int rem1 = num % 60;
            int rem2 = (60 - rem1) % 60;
            count += rem_values[rem2];
            rem_values[rem1] += 1;
        }
        return count;
    }
};