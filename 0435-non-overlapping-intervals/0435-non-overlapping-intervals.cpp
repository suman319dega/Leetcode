class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
       sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            return a[1] < b[1];
        });
        int over_maxi = intervals[0][1];
        int count = 1;
        for(int i=1; i<n; i++) {
            if(intervals[i][0] >= over_maxi) {
                count++;
                over_maxi = intervals[i][1];
            }
        }
        return (n - count);
    }
};