class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,ArrayList<String>> map = new HashMap<>();
        List<List<String>> list = new ArrayList<>();
        int n = strs.length;
        for(String s : strs) {
            char x[] = s.toCharArray();
            Arrays.sort(x);
            String a = "";
            for(char ch : x) a += ch;
            if(map.containsKey(a)) map.get(a).add(s);
            else {
                map.put(a,new ArrayList<>());
                map.get(a).add(s);
            }
        }
        for(ArrayList<String> z : map.values()) {
            list.add(z);
        }
        return list;
    }
}