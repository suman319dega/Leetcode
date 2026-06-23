class Solution {
    public int maxIceCream(int[] costs, int coins) {
        Arrays.sort(costs);
        int count = 0;
        for(int num : costs) {
            if(coins >= num) {
                coins -= num;
                count++;
            }
            else break;
        }
        return count;
    }
}