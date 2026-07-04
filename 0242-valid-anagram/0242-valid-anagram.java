class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()) return false;
        int v[] = new int[26];
        for(char ch : s.toCharArray()) v[ch - 'a']++;
        for(char ch : t.toCharArray()) v[ch - 'a']--;
        for(int num : v) {
            if(num != 0) return false;
        }
        return true;
    }
}