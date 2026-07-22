class Solution {
    public boolean isPalindrome(String s) {
        String str = "";
        for(char ch : s.toCharArray()) {
            if(Character.isDigit(ch)) str += ch;
            if(Character.isLetter(ch)) str += Character.toLowerCase(ch);
        }
        int n = str.length();
        int left = 0, right = n-1;
        while(left < right) {
            if(str.charAt(left) != str.charAt(right)) return false;
            left++;
            right--;
        }
        return true;
    }
}