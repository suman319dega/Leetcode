class Solution {
    public int maxDistance(String moves) {
        int arr[] = new int[2];
        int cards = 0;
        for(char ch : moves.toCharArray()) {
            if(ch == 'U') arr[1] += 1;
            else if(ch == 'D') arr[1] -= 1;
            else if(ch == 'L') arr[0] -= 1;
            else if(ch == 'R') arr[0] += 1;
            else if(ch == '_') cards += 1;
        }
        int a = Math.abs(arr[0]);
        int b = Math.abs(arr[1]);
        return (a+b) + cards;
    }
}