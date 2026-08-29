class Solution {
    public String largestNumber(int[] nums) {
        ArrayList<String> list = new ArrayList<>();
        for(int num : nums) {
            list.add(Integer.toString(num));
        }
        Collections.sort(list, (a, b) -> {
            return (b + a).compareTo(a + b);
        });
        int n = list.size();
        String s = "";
        for(int i=0; i<n; i++) {
            s += list.get(i);
        }
        if(s.charAt(0) == '0') return "0";
        return s;
    }
}