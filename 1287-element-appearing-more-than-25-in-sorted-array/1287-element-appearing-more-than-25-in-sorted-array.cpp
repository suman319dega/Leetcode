class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count = 1;
        int n = arr.size();
        for(int i=1; i<n; i++) {
            if(arr[i] == arr[i-1]) count++;
            else count = 1;
            if(count * 4 > n) return arr[i];
        }
        return arr[0];
    }
};