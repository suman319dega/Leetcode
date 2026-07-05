class Solution {
    public int countCharacters(String[] words, String chars) {
        int arr[] = new int[26];
        for(char ch : chars.toCharArray()) arr[ch - 'a']++;
        int ans = 0;
        for(String s : words) {
            boolean ex = true;
            int v[] = new int[26];
            for(char ch : s.toCharArray()) {
                int id = ch - 'a';
                v[id]++;
                if(v[id] > arr[id]) {
                    ex = false;
                    break;
                }
            }
            if(ex) ans += s.length();
        }
        return ans;
    }
}