class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles;

        while (numBottles >= numExchange) {
            int newBottles = numBottles / numExchange;
            count += newBottles;
            numBottles = newBottles + (numBottles % numExchange);
        }

        return count;
    }
};
