bool dfs(int cur, vector<int>& path, vector<int>& visited, vector<vector<int>>& adj) {
    visited[cur] = 1;
    path[cur] = 1;
    for(int neighbor : adj[cur]) {
        if(!visited[neighbor]) {
            if(dfs(neighbor, path, visited, adj)) return true;
        } else if(path[neighbor]) {
            return true;  
        }
    }
    path[cur] = 0;
    return false;
}

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto& pre : prerequisites) {
            adj[pre[1]].push_back(pre[0]); 
        }

        vector<int> visited(numCourses, 0);
        vector<int> path(numCourses, 0);

        for(int i = 0; i < numCourses; i++) {
            if(!visited[i]) {
                if(dfs(i, path, visited, adj)) return false; 
            }
        }
        return true; 
    }
};
