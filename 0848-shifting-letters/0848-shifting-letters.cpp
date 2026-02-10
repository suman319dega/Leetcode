class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        long long sum = 0;

        for (int x : shifts) {
            sum = (sum + x) % 26;
        }

        for (int i = 0; i < n; i++) {
            int shift = (s[i] - 'a' + sum) % 26;
            s[i] = shift + 'a';

            sum = (sum - shifts[i]) % 26;
            if (sum < 0) sum += 26;
        }

        return s;
    }
};
