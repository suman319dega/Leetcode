class Solution {
    public int[] sumZero(int n) {
        if(n == 1) return new int[]{0};
        int arr[] = new int[n];
        if(n % 2 == 0) {
            int x = n/2;
            int a = x;
            for(int i=0; i<x; i++) {
                arr[i] = a * -1;
                a--;
            }
            a = x;
            for(int i=x; i<n; i++) {
                arr[i] = a;
                a--;
            }
        }
        else {
            int x = n/ 2;
            arr[x] = 0;
            int a = x;
            for(int i=0; i<x; i++) {
                arr[i] = a * -1;
                a--;
            }
            a = x;
            for(int i=x+1; i<n; i++) {
                arr[i] = a;
                a--;
            }

        }
        return arr;
    }
}