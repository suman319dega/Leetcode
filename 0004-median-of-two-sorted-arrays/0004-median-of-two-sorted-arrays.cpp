class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int num : nums1) ans.push_back(num);
        for(int num : nums2) ans.push_back(num);
        sort(ans.begin(),ans.end());
        int n = ans.size();
        if(n % 2 != 0) {
            return ans[n/2];
        }
        else {
            double a = ans[(n/2) - 1];
            double b = ans[n/2];
            return (a + b) / 2.0;
        }
    }
};