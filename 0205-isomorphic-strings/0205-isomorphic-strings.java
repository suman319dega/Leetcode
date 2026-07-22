class Solution {
    public boolean help(String s,String t) {
        if(s.length() != t.length()) return false;
        HashMap<Character,Character> map = new HashMap<>();
        for(int i=0; i<s.length(); i++) {
            char ch1 = s.charAt(i);
            char ch2 = t.charAt(i);
            if(map.containsKey(ch1) && map.get(ch1) != ch2) return false;
            map.put(ch1,ch2);
        }
        return true;
    }


    public boolean isIsomorphic(String s, String t) {
        return help(s,t) && help(t,s);
    }
}