class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        vector<int> temp = score;
        sort(temp.rbegin(), temp.rend());

        map<int,string> m;

        for(int i = 0; i < temp.size(); i++){
            if(i == 0) m[temp[i]] = "Gold Medal";
            else if(i == 1) m[temp[i]] = "Silver Medal";
            else if(i == 2) m[temp[i]] = "Bronze Medal";
            else m[temp[i]] = to_string(i + 1);
        }

        vector<string> ans;
        for(int num : score)
            ans.push_back(m[num]);

        return ans;
    }
};
