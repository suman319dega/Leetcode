class Solution {
    public int maxNumberOfBalloons(String text) {
        int arr[] = new int[26];
        for(char ch : text.toCharArray()) {
            if(ch == 'b' || ch == 'a' || ch == 'l' || ch == 'o' || ch == 'n') {
                arr[ch - 'a']++;
            }
        }
        arr['l' - 'a'] /= 2;
        arr['o' - 'a'] /= 2;
        int b = arr['b' - 'a'], a = arr['a' - 'a'], l = arr['l' - 'a'], o = arr['o' - 'a'], n = arr['n' - 'a'];
        int min = Math.min(b,Math.min(a,Math.min(l,Math.min(o,n))));
        return min;
    }
}