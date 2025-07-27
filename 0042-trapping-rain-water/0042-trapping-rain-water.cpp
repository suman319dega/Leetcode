class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        long long  trapped = 0;
        vector<int> prefix(n);
        vector<int> suffix(n);
        prefix[0] = height[0];
        for(int i=1; i<n; i++) {
            prefix[i] = max(prefix[i-1],height[i]);
        }
        suffix[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--) {
            suffix[i] = max(suffix[i+1],height[i]);
        }

        for(int i=0; i<n; i++) {
            int a = min(prefix[i],suffix[i]);
            if(height[i] < a) {
                trapped += a - height[i];
            }
        }
        return trapped;

    }
};