class Solution {
    public boolean canFinish(int n, int[][] nums) {
        ArrayList<ArrayList<Integer>> list = new ArrayList<>();
        for (int i = 0; i < n; i++) list.add(new ArrayList<>());
        int in[] = new int[n];
        for(int arr[] : nums) {
            list.get(arr[1]).add(arr[0]);
            in[arr[0]]++;
        }
        Queue<Integer> q = new LinkedList<>();
        for(int i=0; i<n; i++) {
            if(in[i] == 0) {
                q.offer(i);
            }
        }
        int count = 0;
        while(!q.isEmpty()) {
            int x = q.poll();
            count++;
            for(int num : list.get(x)) {
                in[num]--;
                if(in[num] == 0) q.offer(num);
            }
        }
        return count == n;
    }
}