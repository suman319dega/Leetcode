class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        if(n==1) return {{1}};
        if(n==2) return {{1},{1,1}};
        vector<vector<int>> ans={{1},{1,1}};
        vector<int> prev = {1,1};
        for(int i=3;i<=n;i++) {
            vector<int> cur(i);
            cur[0]=1;
            cur[i-1] =1;
            for(int j=1;j<i-1;j++) {
                int a = prev[j] + prev[j-1];
                cur[j]=a;
             }
             ans.push_back(cur);
             prev = cur;
        }
        return ans;
    }
};