class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp = arr;
        sort(temp.begin(),temp.end());
        map<int,int> m;
        int rank = 1;
        for(int i=0; i<n; i++) {
            if(m.find(temp[i]) == m.end()) {
                m[temp[i]] = rank++;
            }
        }
        vector<int> ans;
        for(int num : arr) {
            ans.push_back(m[num]);
        }
        return ans;
    }
};