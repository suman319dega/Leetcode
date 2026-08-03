class Solution {
    public boolean dfs(int i,boolean[] visited,boolean[] path, ArrayList<ArrayList<Integer>> list,ArrayList<Integer> ans) {
        visited[i] = true;
        path[i] = true;
        for(int num : list.get(i)) {
            if(!visited[num]) {
                if(dfs(num,visited,path,list,ans)) return true;
            }
            else if(path[num]) return true;
        }
        ans.add(i);
        path[i] = false;
        return false;
    }
    public int[] findOrder(int n, int[][] nums) {
        ArrayList<ArrayList<Integer>> list = new ArrayList<>();
        for(int i=0; i<n; i++) {
            list.add(new ArrayList<>());
        }

        for(int arr[] : nums) {
            list.get(arr[1]).add(arr[0]);
        }

        boolean visited[] = new boolean[n];
        boolean path[] = new boolean[n];
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                if(dfs(i,visited,path,list,ans)) return new int[]{};
            }
        }
        Collections.reverse(ans);
        int x[] = new int[ans.size()];
        for(int i=0; i<list.size(); i++) {
            x[i] = ans.get(i);
        }
        return x;
        
    }
}