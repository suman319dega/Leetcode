class Solution {
    public void rev(int arr[]) {
        int low = 0, high = arr.length-1;
        while(low < high) {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }
    public void rotate(int[][] matrix) {
        int n = matrix.length;
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(int arr[] : matrix) {
            rev(arr);
        }
    }
}