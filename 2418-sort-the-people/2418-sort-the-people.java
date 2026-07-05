class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        Map<Integer,String> m = new TreeMap<>(Collections.reverseOrder());
        for(int i=0; i<names.length; i++) {
            m.put(heights[i],names[i]);
        }
        ArrayList<String> list = new ArrayList<>();
        m.forEach((key,value) -> {
            list.add(value);
        });

        return list.toArray(new String[0]);
    }
}