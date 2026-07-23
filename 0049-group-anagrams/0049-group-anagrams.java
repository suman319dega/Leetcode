class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> ans = new ArrayList<>();
        HashMap<String,List<String>> map = new HashMap<>();
        for(String s : strs) {
            String x[] = s.split("");
            Arrays.sort(x);
            String a = String.join("",x);
            if(!map.containsKey(a)) {
                map.put(a,new ArrayList<>());
            }
            map.get(a).add(s);
        }
        for(List<String> m : map.values()) {
            ans.add(m);
        }
        return ans;
    }
}