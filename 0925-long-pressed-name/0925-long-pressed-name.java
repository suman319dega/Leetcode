class Solution {
    public boolean isLongPressedName(String name, String typed) {
        int a = name.length();
        int b = typed.length();
        int i = 0, j = 0;
        while(j < b) {
            if(i < a && name.charAt(i) == typed.charAt(j)) {
                i++;
                j++;
            }
            else if(j > 0 && typed.charAt(j-1) == typed.charAt(j)) j++;
            else return false;
        }
        return i == a;
    }
}