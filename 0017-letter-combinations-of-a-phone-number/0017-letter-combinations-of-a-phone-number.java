class Solution {
    public static void backtrack(int i,String digits,String cur,List<String> ans,HashMap<Character,String>map) {
        if(i == digits.length()) {
            ans.add(cur);
            return;
        }

        String sent = map.get(digits.charAt(i));
        for(char ch : sent.toCharArray()) {
            cur += ch;
            backtrack(i+1,digits,cur,ans,map);
            cur = cur.substring(0,cur.length()-1);
        }
    }
    public List<String> letterCombinations(String digits) {
        if(digits.length() == 0) return new ArrayList<>();
        HashMap<Character,String> map = new HashMap<>();
        map.put('2',"abc");map.put('3',"def");map.put('4',"ghi");map.put('5',"jkl");
        map.put('6',"mno");map.put('7',"pqrs"); map.put('8',"tuv"); map.put('9',"wxyz");
        List<String> ans = new ArrayList<>();
        String cur = "";
        backtrack(0,digits,cur,ans,map);
        return ans;
    }
}