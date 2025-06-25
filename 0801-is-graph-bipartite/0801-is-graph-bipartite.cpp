class Solution {
public:
    bool dfs(int st, vector<vector<int>>& graph, vector<int>& visited, int color) {
        visited[st] = color;

        for(int num : graph[st]) {
            if(visited[num] == -1) {
                if(!dfs(num, graph, visited, 1 - color))
                    return false;
            } else if(visited[num] == color) {
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> visited(n, -1);

        for(int i = 0; i < n; ++i) {
            if(visited[i] == -1) {
                if(!dfs(i, graph, visited, 0)) 
                    return false;
            }
        }
        return true;
    }
};
