#include <bits/stdc++.h>
using namespace std;

void dfs(int i, vector<int> &visited, vector<vector<int>> &isConnected) {
   visited[i] = 1;
  for(int num = 0; num < isConnected[i].size(); ++num) {
    if(isConnected[i][num] == 1 && !visited[num]) {
        dfs(num, visited, isConnected);
    }
}

   }

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n, 0);
        int count = 0;

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                ++count;
                dfs(i, visited,isConnected);
            }
        }

        return count;
    }
}; 
