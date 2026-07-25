class Solution {
    public int maxProduct(int n) {
        ArrayList<Integer> list = new ArrayList<>();
        while(n != 0) {
            list.add(n % 10);
            n = n / 10;
        }
        Collections.sort(list);
        int x = list.size();
        int ans = (list.get(x-1) * list.get(x-2));

        return ans;
    }
}