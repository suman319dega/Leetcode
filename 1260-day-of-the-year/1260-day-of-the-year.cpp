#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        vector<int> months = {31,28,31,30,31,30,31,31,30,31,30,31};
        
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            months[1] = 29; 
        }

        int total_days = 0;
        for (int i = 0; i < month - 1; ++i) {
            total_days += months[i];
        }

        total_days += day;
        return total_days;
    }
};
