class Solution {
public:
    bool dfs(int cur, vector<vector<int>>& adj, vector<int>& visited, vector<int>& path, stack<int>& stk) {
        visited[cur] = 1;
        path[cur] = 1;

        for (int num : adj[cur]) {
            if (!visited[num]) {
                if (dfs(num, adj, visited, path, stk)) return true; 
            }
            else if (path[num]) {
                return true; 
            }
        }

        path[cur] = 0;
        stk.push(cur); 
        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for (auto& p : prerequisites) {
            adj[p[1]].push_back(p[0]); 
        }

        vector<int> visited(numCourses, 0), path(numCourses, 0);
        stack<int> stk;

        for (int i = 0; i < numCourses; ++i) {
            if (!visited[i]) {
                if (dfs(i, adj, visited, path, stk)) {
                    return {}; 
                }
            }
        }

        vector<int> ans;
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
        return ans;
    }
};
