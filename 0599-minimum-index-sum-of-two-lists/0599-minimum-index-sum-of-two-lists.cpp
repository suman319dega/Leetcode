class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int> m;
        int min_id = INT_MAX;

        for(int i = 0; i < list1.size(); i++)
            m[list1[i]] = i;

        vector<string> common; 

        for(int i = 0; i < list2.size(); i++) {
            if(m.find(list2[i]) != m.end()) {
                m[list2[i]] += i;         
                min_id = min(min_id, m[list2[i]]);
                common.push_back(list2[i]);  
            }
        }

        vector<string> ans;
        for(string &s : common) {
            if(m[s] == min_id)
                ans.push_back(s);
        }

        return ans;
    }
};
