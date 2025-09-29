class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        map<int,int> m;
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        set<int> s3(nums3.begin(),nums3.end());
        for(int num : s1) m[num]++;
        for(int num : s2) m[num]++;
        for(int num : s3) m[num]++;

        vector<int> ans;
        for(auto [num,count] : m) {
            if(count >= 2) ans.push_back(num);
        }
        return ans;
    }
};