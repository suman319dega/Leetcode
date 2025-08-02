class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int mis = 0,rep = 0;
        int n = nums.size();
        vector<int> arr(n+1);
        for(int num : nums) {
            arr[num] += 1;
        }
        for(int i=1; i<n+1; i++){
            if(arr[i] > 1) rep = i;
            else if(arr[i] == 0) mis = i;
        }
        return {rep,mis};
    }
};