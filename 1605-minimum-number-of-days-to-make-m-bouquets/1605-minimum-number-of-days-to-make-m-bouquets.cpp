int no_of_bouquets(vector<int> &bloomDay, int k, int mid) {
    int count = 0, bouquets = 0;
    for(int num : bloomDay) {
        if(num <= mid) {
            count += 1;
            if(count == k) {
                bouquets += 1;
                count = 0;
            }
        }
        else count = 0;
    }
    return bouquets;
}

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if ((long long)m * k > n) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int ans = -1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(no_of_bouquets(bloomDay,k,mid) >= m) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};