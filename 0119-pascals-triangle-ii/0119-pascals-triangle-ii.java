class Solution {
    public List<Integer> getRow(int n) {
        List<List<Integer>> list = new ArrayList<>();
        list.add(List.of(1));
        list.add(List.of(1,1));
        for(int i=2; i<=n; i++) {
            Integer[] arr = new Integer[i+1];
            arr[0] = 1;
            arr[i] = 1;
            for(int j=1; j<i; j++) {
                List<Integer> x = list.get(i-1);
                arr[j] = x.get(j-1) + x.get(j);
            }
            list.add(List.of(arr));
        }
        return list.get(n);
    }
}