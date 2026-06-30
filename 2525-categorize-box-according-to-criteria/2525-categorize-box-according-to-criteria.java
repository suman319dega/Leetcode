class Solution {
    public String categorizeBox(int length, int width, int height, int mass) {

        long volume = (long) length * width * height;
        
        long dimThreshold = 10000;       // 10^4
        long volThreshold = 1000000000;  // 10^9
        
        boolean isBulky = length >= dimThreshold || width >= dimThreshold || 
                          height >= dimThreshold || volume >= volThreshold;
        boolean isHeavy = mass >= 100;
        
        if (isBulky && isHeavy) {
            return "Both";
        }
        if (!isBulky && !isHeavy) {
            return "Neither";
        }
        if (isBulky) {
            return "Bulky";
        }
        
        return "Heavy";
    }
}