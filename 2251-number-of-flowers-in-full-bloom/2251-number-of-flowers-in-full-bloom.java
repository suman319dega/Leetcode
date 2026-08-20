class Solution {
    public int Upper(int arr[],int k) {
        int low = 0, high = arr.length - 1;
        int ans = 0;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] <= k) {
                ans = mid + 1;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
    public int Lower(int arr[],int k) {
        int low = 0, high = arr.length - 1;
        int ans = 0;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] < k) {
                ans = mid + 1;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
    public int[] fullBloomFlowers(int[][] flowers, int[] people) {
        int n = flowers.length;
        int start[] = new int[n];
        int end[] = new int[n];
        int ans[] = new int[people.length];
        for (int i = 0; i < n; i++) { 
            start[i] = flowers[i][0]; 
            end[i] = flowers[i][1]; 
        }
        Arrays.sort(start); 
        Arrays.sort(end);
        for (int i = 0; i < people.length; i++) {
            int started = Upper(start, people[i]);
            int ended = Lower(end, people[i]);
            ans[i] = started - ended;
        }
        return ans;
    }
}