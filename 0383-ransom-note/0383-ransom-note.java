class Solution {
    public boolean canConstruct(String a, String b) {
        int arr1[] = new int[26];
        int arr2[] = new int[26];
        for(char ch : b.toCharArray()) arr1[ch - 'a']++;
        for(char ch : a.toCharArray()) arr2[ch -'a']++;
        for(char ch : a.toCharArray()) {
            if(arr1[ch - 'a'] < arr2[ch - 'a']) return false;
        }
        return true;
    }
}