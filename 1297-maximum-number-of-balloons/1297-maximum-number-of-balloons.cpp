class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> m;
        for(char ch : text) {
            if(ch == 'b' || ch == 'a' || ch == 'l' || ch == 'o' || ch == 'n') {
                m[ch] += 1;
            }
        }
        if(m.size() < 5) return 0;
        return min({m['b'],m['a'],m['l']/2,m['o']/2,m['n']});
    }
};