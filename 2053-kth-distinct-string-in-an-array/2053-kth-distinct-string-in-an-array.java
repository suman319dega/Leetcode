class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String, Integer> m = new HashMap<>();
        for (String s : arr) {
            m.put(s, m.getOrDefault(s, 0) + 1);
        }
        
        int count = 0;
        for (String s : arr) {
            if (m.get(s) == 1) {
                count++;
                if (count == k) {
                    return s;
                }
            }
        }
        
        return "";
    }
}