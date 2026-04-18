void rev(int st,int en, vector<int> &nums) {
    int low = st, high = en - 1;
    while(low < high) {
        swap(nums[low],nums[high]);
        low++,high--;
    }
}
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        rev(0,n,nums);
        rev(0,k,nums);
        rev(k,n,nums);
    }
};