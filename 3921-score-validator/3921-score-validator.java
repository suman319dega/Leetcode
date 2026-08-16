class Solution {
    public int[] scoreValidator(String[] events) {
        int score = 0;
        int count = 0;
        for(String s : events) {
           if(count == 10) break;

           switch(s) {
             case "WD":
             case "NB":
             case "1":
                score += 1;
                break;
            case "2":
                score += 2;
                break;
            case "3":
                score += 3;
                break;
            case "4":
                score += 4;
                break;
            case "6":
                score += 6;
                break;
            case "W":
                count++;
                break;
            case "0":
            default:
                break;

           }
        }
        return new int[]{score,count};
    }
}