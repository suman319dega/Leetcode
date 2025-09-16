class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(string s : operations) {
            if(s == "X++" || s == "++X") x += 1;
            else if(s == "X--" || s == "--X") x -= 1;
        }
        return x;
    }
};