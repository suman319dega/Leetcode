class Solution {
    public boolean isPalindrome(String s) {
        String str = "";
        for(char ch : s.toCharArray()) {
            if(Character.isLetterOrDigit(ch)) str += ch;
        }
        String x[] = str.split("");
        int n = x.length;
        int low = 0, high = n-1;
        while(low < high) {
            if(!x[low].equalsIgnoreCase(x[high])) return false;
            low++;
            high--;
        }
        return true;
    }
}