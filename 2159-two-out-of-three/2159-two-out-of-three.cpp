#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int freq[101][3] = {};
        
        for (int x : nums1) freq[x][0] = 1;
        for (int x : nums2) freq[x][1] = 1;
        for (int x : nums3) freq[x][2] = 1;

        vector<int> result;
        for (int i = 1; i <= 100; i++) {
            if (freq[i][0] + freq[i][1] + freq[i][2] >= 2) {
                result.push_back(i);
            }
        }
        return result;
    }
};
