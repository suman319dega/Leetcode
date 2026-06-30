class Solution {
    public int rearrangeCharacters(String s, String target) {
        int arr1[] = new int[26];
        int arr2[] = new int[26];
        for(char ch : s.toCharArray()) {
            arr1[ch - 'a']++;
        }
        for(char ch : target.toCharArray()) {
            arr2[ch - 'a']++;
        }
        int mini = Integer.MAX_VALUE;
        for(char ch : target.toCharArray()) {
            if(arr1[ch - 'a'] == 0) return 0;
            mini = Math.min(mini,arr1[ch - 'a']/arr2[ch - 'a']);
        }

        return mini;
    }
}