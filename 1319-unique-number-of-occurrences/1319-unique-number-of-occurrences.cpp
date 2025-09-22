class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        for(int num : arr) {
            m[num] += 1;
        }
        set<int> s;
        for(auto el : m) {
            if(s.count(el.second)) return false;
            s.insert(el.second);
        }
        return true;
    }
};