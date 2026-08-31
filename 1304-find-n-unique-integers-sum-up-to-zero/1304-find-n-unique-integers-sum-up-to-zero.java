class Solution {
    public int[] sumZero(int n) {
        int arr[] = new int[n];
        int x = n;
        int i = 0, j = n-1;
        while(i < j) {
            arr[i] = -x;
            arr[j] = x;
            x--;
            i++;
            j--;
        }
        if(i == j) arr[i] = 0;
        return arr;
    }
}