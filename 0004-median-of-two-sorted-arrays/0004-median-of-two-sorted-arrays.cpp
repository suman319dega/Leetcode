class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged_array;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]) {
                merged_array.push_back(nums1[i]);
                i++;
            }
            else {
                merged_array.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums1.size()) {
                merged_array.push_back(nums1[i]);
                i++;
        }
        while(j < nums2.size()) {
                merged_array.push_back(nums2[j]);
                j++;
        }
        int n = merged_array.size();

       if (n % 2 == 0) {
        return (merged_array[n/2 - 1] + merged_array[n/2]) / 2.0;
       }
      else return merged_array[n/2];
    }
};