class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr2.size();
        int i = 0;
        int ans = 0;
        while(i < arr1.size()) {
            bool valid = true;
            for(int j=0; j<n; j++) {
                int defi = abs(arr1[i] - arr2[j]);
                if(defi <= d) {
                    valid = false;
                    break;
                }
            }
            if(valid)ans += 1;
            i++;
        }
        return ans;
    }
};