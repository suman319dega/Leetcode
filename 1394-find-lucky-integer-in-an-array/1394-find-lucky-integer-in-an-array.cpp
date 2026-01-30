class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int num : arr) m[num]++;
        int maxi = -1;
        for(auto  val : m) {
            int a = val.first;
            int b = val.second;
            if(a == b) maxi = max(a,maxi);
        }
        return maxi;
    }
};