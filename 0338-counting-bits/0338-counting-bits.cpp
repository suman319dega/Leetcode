class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++) {
            int count = 0;
            int num = i;
            while(num!=0) {
                if(num%2 !=0) count += 1;
                num = num / 2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};