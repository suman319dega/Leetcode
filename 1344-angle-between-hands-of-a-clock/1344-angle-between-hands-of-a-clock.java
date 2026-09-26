class Solution {
    public double angleClock(int hour, int minutes) {
        double ha = (hour % 12) * 30 + (minutes * 0.5);
        double ma = minutes * 6;
        double diff = Math.abs(ha - ma);
        double ans = Math.min(diff,360-diff);
        return ans;
    }
}