class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        HashMap<Character,Integer> m = new HashMap<>();
        for(char ch : stones.toCharArray()) {
            m.put(ch,m.getOrDefault(ch,0)+1);
        }
        int count = 0;
        for(char ch : jewels.toCharArray()) {
            if(m.containsKey(ch)) count += m.get(ch);
        }
        return count;
    }
}