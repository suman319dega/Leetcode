class Solution {
    public List<Integer> lexicalOrder(int n) {
        List<Integer> list = new ArrayList<>();
        int cur = 1;
        for(int i=1; i<=n; i++) {
            list.add(cur);
            if(cur * 10 <= n) {
                cur *= 10;
            }
            else {
                while(cur % 10 == 9 || cur + 1 > n) cur = cur / 10;
                cur++;
            }
        }
        return list;
    }
}