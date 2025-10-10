class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int low = 0, high = n-1;
        while(low <= high) {
            int sum = numbers[low] + numbers[high];
            if(sum > target) high--;
            else if(sum < target) low++;
            else return {low+1,high+1};
        }
        return {-1,-1};
    }
};