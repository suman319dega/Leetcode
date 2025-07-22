class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int i = 0;
        int count= 0;
        while(i<s.size()){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                count = 0;
            }
            if(count<2){
                ans+=s[i];
            }
            i++;
        }
        return ans;
    }
};