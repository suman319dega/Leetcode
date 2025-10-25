class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix(n),suffix(n);
        prefix[0] = height[0];
        for(int i=1; i<n; i++) {
            if(height[i] > prefix[i-1]) {
                prefix[i] = height[i];
            }
            else prefix[i] = prefix[i-1];
        }
        suffix[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--) {
            if(height[i] > suffix[i+1]) {
                suffix[i] = height[i];
            }
            else suffix[i] = suffix[i+1];
        }

        int rain = 0;
        for(int i=0; i<n; i++) {
            rain += min(prefix[i],suffix[i]) - height[i]; 
        }
        return rain;
    }
};