class Solution {
    public List<String> stringMatching(String[] words) {
        ArrayList<String> list = new ArrayList<>();
        int n = words.length;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(i != j) {
                    if(words[j].contains(words[i])) {
                        if(list.isEmpty()) {
                            list.add(words[i]);
                        }
                        else {
                            if(!list.get(list.size() - 1).equals(words[i])) list.add(words[i]);
                        }
                    }
                }
            }
        }
        return list;
    }
}