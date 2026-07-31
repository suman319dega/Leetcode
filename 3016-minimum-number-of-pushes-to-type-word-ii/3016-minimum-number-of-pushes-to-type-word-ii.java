class Solution {
    public int minimumPushes(String word) {
        int arr[] = new int[26];
        for(char ch : word.toCharArray()) arr[ch - 'a']++;
        Arrays.sort(arr);
        int pushes = 0;
        int rank = 0;
        for(int i=25; i>=0; i--) {
            if(arr[i] == 0) break;
            int push = (rank / 8) + 1;
            pushes += arr[i] * push;
            rank++;
        }
        return pushes;
    }
}