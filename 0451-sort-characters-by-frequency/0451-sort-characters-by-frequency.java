class Solution {
    public String frequencySort(String s) {
        
        HashMap<Character, Integer> map = new HashMap<>();
        for (char ch : s.toCharArray()) {
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }
        
        // 2. Move map entries into a List so we can sort them by value
        List<Map.Entry<Character, Integer>> list = new ArrayList<>(map.entrySet());
        
        // 3. Sort the list by values in DESCENDING order (highest frequency first)
        list.sort((a, b) -> b.getValue().compareTo(a.getValue()));
        
        // 4. Build the final string efficiently using StringBuilder
        StringBuilder ans = new StringBuilder();
        for (Map.Entry<Character, Integer> entry : list) {
            char ch = entry.getKey();
            int val = entry.getValue();
            
            while (val-- > 0) {
                ans.append(ch);
            }
        }
        
        return ans.toString();
    }
}