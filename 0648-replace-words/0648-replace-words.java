class Solution {
    public String replaceWords(List<String> dictionary, String sentence) {
        HashMap<Character, List<String>> map = new HashMap<>();
        for(String s : dictionary) {
            char ch = s.charAt(0);
            if(!map.containsKey(ch)) {
                map.put(ch, new ArrayList<>());
            }
            map.get(ch).add(s);
        }

        String x[] = sentence.split("\\s+");
        String ans = "";
        int n = x.length;
        for(int i = 0; i < n; i++) {
            String s = x[i];
            String root = s;
            if(map.containsKey(s.charAt(0))) {
                for(String word : map.get(s.charAt(0))) {
                    if(s.startsWith(word) && word.length() < root.length()) {
                        root = word;
                    }
                }
            }
            ans += root;
            if(i != n - 1) {
                ans += " ";
            }
        }

        return ans;
    }
}