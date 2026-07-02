class Solution {
    public boolean isPalindrome(String s) {
        String str = "";
        for(char ch : s.toCharArray()) {
            if(Character.isLetterOrDigit(ch)) str += Character.toLowerCase(ch);
        }

        int n = str.length();
        int low = 0, high = n-1;
        while(low < high) {
            if(str.charAt(low) != str.charAt(high)) return false;
            low++;
            high--;
        }
        return true;
    }
}