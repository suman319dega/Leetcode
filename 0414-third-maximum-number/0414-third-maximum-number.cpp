class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        vector<int> arr(s.begin(),s.end());
        sort(arr.rbegin(),arr.rend());
        if(arr.size() < 3) return arr[0];
        else return arr[2];
    }
};