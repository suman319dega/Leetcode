class Solution {
    public boolean canFormArray(int[] arr, int[][] pieces) {
        Map<Integer,int[]> map = new HashMap<>();
        for(int[] p : pieces) {
            map.put(p[0],p);
        }
        int i = 0;
        while(i < arr.length) {
            if(!map.containsKey(arr[i])) {
                return false;
            }
            int x[] = map.get(arr[i]);
            for(int num : x) {
                if(i >= arr.length || arr[i] != num) {
                    return false;
                }
                i++;
            }
        }
        return true;
    }
}