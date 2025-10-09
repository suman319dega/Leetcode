class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk;
        map<int,int> m;
        for(int num : nums2) {
            while(!stk.empty() && stk.top() < num) {
                m[stk.top()] = num;
                stk.pop();
            }
            stk.push(num);
        }
        vector<int> ans;
        for(int num : nums1) {
            if(m.find(num) != m.end()) {
                ans.push_back(m[num]);
            }
            else ans.push_back(-1);
        }
        return ans;

    }
};