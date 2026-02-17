class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i=0,n = arr.size();
        while(i<n){
            if(arr[i] == 0){
                arr.insert(arr.begin()+i+1,0);
                arr.pop_back();
                i++;
            }
            i++;
        }
    }
};