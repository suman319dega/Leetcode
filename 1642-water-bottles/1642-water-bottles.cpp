class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles, empty = numBottles;
        while(empty >= numExchange) {
            int bottles = empty / numExchange;
            total += bottles;
            empty = empty % numExchange + bottles;
        }
        return total;
    }
};