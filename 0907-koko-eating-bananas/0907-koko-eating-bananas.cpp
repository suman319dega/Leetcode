long long time_taken(vector<int> &piles, int mid) {
            long long result = 0;
            for(int num : piles) {
                result += ceil((double)num/(double)mid);
            }
            return result;
        }

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(),piles.end());
        int ans = high;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(time_taken(piles,mid)<= h) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};