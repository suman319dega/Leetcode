class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int total_gas = 0;
        int total_cost = 0;
        for(int num : gas) total_gas += num;
        for(int num : cost) total_cost += num;
        if(total_gas < total_cost) return -1;
        int start = 0;
        int balance = 0;
        for(int i=0; i<gas.length; i++) {
            balance += gas[i] - cost[i];
            if(balance < 0) {
                balance = 0;
                start = i + 1;
            }
        }
        return start;
    }
}