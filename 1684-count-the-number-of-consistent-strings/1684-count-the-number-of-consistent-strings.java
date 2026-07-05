class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        boolean arr[] = new boolean[26];
        for(char ch : allowed.toCharArray()) arr[ch - 'a'] = true;
        int count = 0;
        for(String s : words) {
            boolean cons = true;
            for(char ch : s.toCharArray()) {
                if(!arr[ch - 'a']) {
                    cons = false;
                    break;
                }
            }
            if(cons) count++;
        }
        return count;
    }
}