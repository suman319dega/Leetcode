class Solution {
    public int countCharacters(String[] words, String chars) {
        int arr[] = new int[26];
        for(char ch : chars.toCharArray()) arr[ch - 'a']++;
        int sum = 0;
        for(String s : words) {
            boolean x = true;
            int v[] = new int[26];
            for(char ch : s.toCharArray()) {
                int id = ch - 'a';
                v[id]++;
                if(v[id] > arr[id]) {
                    x = false;
                    break;
                }
            }
            if(x) sum += s.length();
        }
        return sum;
    }
}