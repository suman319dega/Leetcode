class Solution {
public:
    int maxDistinct(string s) {
        int count = 0;
        vector<int> arr(26,0);
        for(char ch : s) {
            if(arr[ch - 'a'] != 1) {
                arr[ch - 'a'] = 1;
                count++;
            }
        }
        return count;
    }
};