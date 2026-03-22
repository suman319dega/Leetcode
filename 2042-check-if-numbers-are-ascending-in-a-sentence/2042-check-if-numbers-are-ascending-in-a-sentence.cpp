class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string word;
        int prev = -1;

        while(ss >> word) {
            if(isdigit(word[0])) {
                int num = stoi(word);
                if(num <= prev) return false;

                prev = num;
            }
        }

        return true;
    }
};