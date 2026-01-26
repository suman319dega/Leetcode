class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int min_diff = INT_MAX;
        for(int i=1; i<arr.size(); i++) {
            int diff = abs(arr[i] - arr[i-1]);
            min_diff = min(diff,min_diff);
        }
        for(int i=1; i<arr.size(); i++) {
            int diff = abs(arr[i] - arr[i-1]);
            if(diff == min_diff) ans.push_back({arr[i-1],arr[i]});
        }
        return ans;
    }
};