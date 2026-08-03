class Solution {
    public boolean dfs(int i,boolean[] visited, boolean[] path,ArrayList<ArrayList<Integer>> list) {
        visited[i] = true;
        path[i] = true;
        for(int num : list.get(i)) {
            if(!visited[num]) {
                if(dfs(num,visited,path,list)) return true;
            }
            else if(path[num]) return true;
        }
        path[i] = false;
        return false;
    }
    public boolean canFinish(int n, int[][] nums) {
        ArrayList<ArrayList<Integer>> list = new ArrayList<>();
        for (int i = 0; i < n; i++) list.add(new ArrayList<>());
        for(int arr[] : nums) {
            list.get(arr[1]).add(arr[0]);
        }
        boolean[] visited = new boolean[n];
        boolean[] path = new boolean[n];
        for(int i=0; i<n; i++) {
            if(!visited[i] && dfs(i,visited,path,list)) return false;
        }
        return true;
    }
}