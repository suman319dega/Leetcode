class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0, sum = 0;
        for(int i=0; i<k; i++) {
            sum += arr[i];
        }
        if(sum/k >= threshold) count += 1;
        for(int i=k; i<arr.size(); i++) {
            sum = sum - arr[i-k];
            sum += arr[i];
            if(sum/k >= threshold) count += 1;

        }
        return count;
    }
};