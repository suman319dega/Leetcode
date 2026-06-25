class Solution {
    public String defangIPaddr(String address) {
        String ans = "";
        for(char ch : address.toCharArray()) {
            if(ch == '.') ans += "[.]";
            else ans += ch;
        }
        return ans;
    }
}