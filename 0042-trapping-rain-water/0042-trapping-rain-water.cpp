class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix(n);
        prefix[0] = height[0];
        for(int i=1; i<n; i++) {
            prefix[i] = max(height[i],prefix[i-1]);
        }
        vector<int> suffix(n);
        suffix[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--) {
            suffix[i] = max(height[i],suffix[i+1]);
        }
        int trapped = 0;
        for(int i=0; i<n; i++) {
            int a = min(prefix[i],suffix[i]);
            if(height[i] < a) {
                trapped += (a - height[i]);
            }
        }
        return trapped;
    }
};