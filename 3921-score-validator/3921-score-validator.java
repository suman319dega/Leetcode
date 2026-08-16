class Solution {
    public int[] scoreValidator(String[] events) {
        HashMap<String,Integer> map = new HashMap<>();
        map.put("WD",1);
        map.put("NB",1);
        map.put("1",1);
        map.put("0",0);
        map.put("2",2);
        map.put("3",3);
        map.put("4",4);
        map.put("6",6);
        int score = 0;
        int count = 0;
        for(String s : events) {
            if(count == 10) break;
            if(map.containsKey(s)) score += map.get(s);
            else if(s.equals("W") && count < 10) count++;
        }
        return new int[]{score,count};
    }
}