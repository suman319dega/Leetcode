class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int boxes = 0;
        for(int num : apple) {
            boxes += num;
        }
        sort(capacity.rbegin(),capacity.rend());
        int i = 0;
        while(boxes > 0) {
            boxes -= capacity[i];
            i += 1;
        }
        return i;
    }
};