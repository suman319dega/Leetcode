class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<int> p(n);
        iota(p.begin(), p.end(), 0);
        do {
            bool ok = true;
            for(int i=0;i<n;i++)
                for(int j=i+1;j<n;j++)
                    if(abs(i-j)==abs(p[i]-p[j])) ok=false;
            if(ok){
                vector<string> b(n,string(n,'.'));
                for(int i=0;i<n;i++) b[i][p[i]]='Q';
                ans.push_back(b);
            }
        } while(next_permutation(p.begin(),p.end()));
        return ans;
    }
};