class Solution {
    public String reverseByType(String s) {
        int n = s.length();
        int left = 0, right = n-1;
        char arr[] = s.toCharArray();
        while(left < right) {
            if(!Character.isLetterOrDigit(arr[left])) left++;
            else if(!Character.isLetterOrDigit(arr[right])) right--;
            else {
                char temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;
                right--;
            }

        }
        left = 0;
        right = n-1;
        while(left < right) {
            if(Character.isLetterOrDigit(arr[left])) left++;
            else if(Character.isLetterOrDigit(arr[right])) right--;
            else {
                char temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;
                right--;
            }

        }
        return new String(arr);
    }
}