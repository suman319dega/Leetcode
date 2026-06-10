class Solution {
    public boolean help(String s,String t) {
        HashMap<Character,Character> map = new HashMap<>();
        for(int i=0; i<s.length(); i++) {
            char a = s.charAt(i);
            char b = t.charAt(i);
            if(map.containsKey(a) && map.get(a) != b) return false;
            map.put(a,b);
        }
        return true;
    }


    public boolean isIsomorphic(String s, String t) {
        if(s.length() != t.length()) return false;
        return (help(s,t) && help(t,s));
    }
}