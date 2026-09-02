class Solution {
    public long maxEnergyBoost(int[] A, int[] B) {
        int n = A.length;
        long dpA[] = new long[n];
        long dpB[] = new long[n];
        dpA[0] = A[0];
        dpA[1] = A[1] + dpA[0];
        dpB[0] = B[0];
        dpB[1] = B[1] + dpB[0];
        for(int i=2; i<n; i++) {
            dpA[i] = Math.max(dpA[i-1],dpB[i-2]) + A[i];
            dpB[i] = Math.max(dpB[i-1],dpA[i-2]) + B[i];
        }
        return Math.max(dpA[n-1],dpB[n-1]);

    }
}