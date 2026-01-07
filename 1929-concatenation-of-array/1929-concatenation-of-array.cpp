class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int a = 2 * n;
        vector<int>temp(a);
        for(int i=0; i<n; i++) {
            temp[i] = nums[i];
        }
        for(int i=n; i<a; i++) {
            temp[i] = nums[i%n];
        }
        return temp;
    }
};