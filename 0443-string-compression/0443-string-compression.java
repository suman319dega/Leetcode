class Solution {
    public int compress(char[] chars) {
        int n = chars.length;
        if (n == 1) return 1;
        StringBuilder s = new StringBuilder();
        int i = 0;
        while (i < n) {
            char ch = chars[i];
            int count = 0;
            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }
            s.append(ch);
            if (count > 1) {
                s.append(count);
            }
        }

        for (int j = 0; j < s.length(); j++) {
            chars[j] = s.charAt(j);
        }

        return s.length();
    }
}