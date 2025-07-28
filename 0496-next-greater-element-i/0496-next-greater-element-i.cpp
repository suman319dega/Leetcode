class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int num : nums1) {
            int idx = -1;
            int nxt = -1;
            for(int i=0; i<nums2.size(); i++) {
                if(nums2[i] == num) idx = i;
            }
            for(int i=idx+1; i<nums2.size(); i++) {
                if(nums2[i] > num) {
                    nxt = nums2[i];
                    break;
                }
            }
            ans.push_back(nxt);
        }
        return ans;
    }
};