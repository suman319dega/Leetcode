class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size(), m = goal.size();
        if (n != m) return false;
        
        string new_goal = goal + goal;

        int i = 0, j = 0;
        while (j < new_goal.size()) {
            if (s[i] == new_goal[j]) {
                i++;
                j++;
                if (i == n) return true; 
            } else {
                j = j - i + 1;  
                i = 0;
            }
        }
        return false;
    }
};
