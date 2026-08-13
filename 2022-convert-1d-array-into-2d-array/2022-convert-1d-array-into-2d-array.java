class Solution {
    public int[][] construct2DArray(int[] nums, int m, int n) {
        int ans[][] = new int[m][n];
        int x = nums.length;
        if(m * n != x) return new int[][]{};
        int k = 0;
        while(k < x) {
            for(int i=0; i<m; i++) {
                for(int j=0; j<n; j++) {
                    ans[i][j] = nums[k++];
                }
            }
        }
        return ans;
    }
}