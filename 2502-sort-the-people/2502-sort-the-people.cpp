class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int,string>> v;
        for(int i=0; i<n; i++){
           v.push_back({heights[i],names[i]});
        }
        sort(v.rbegin(),v.rend());
        vector<string> ans;
        for(auto val : v) {
            ans.push_back(val.second);
        }
        return ans;
        
    }
};