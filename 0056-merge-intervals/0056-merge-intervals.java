class Solution {
    public int[][] merge(int[][] arr) {
       Arrays.sort(arr,(a,b) -> Integer.compare(a[0],b[0]));
       List<int[]> list = new ArrayList<>();
       int cs = arr[0][0];
       int ce = arr[0][1];
       for(int i=1; i<arr.length; i++) {
            int ns = arr[i][0];
            int ne = arr[i][1];
            if(ns <= ce) {
                ce = Math.max(ne,ce);
            }
            else {
                list.add(new int[]{cs,ce});
                cs = ns;
                ce = ne;
            }
       }
       list.add(new int[]{cs,ce});
       return list.toArray(new int[list.size()][]);
    }
}