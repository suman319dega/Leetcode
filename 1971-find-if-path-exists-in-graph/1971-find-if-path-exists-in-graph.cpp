class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;
        vector<vector<int>> adj(n);
        for(auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<int> visited(n,0);
        queue<int> q;
        q.push(source);
        visited[source] = 1;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            if(node == destination) return true;
            for(int num : adj[node]) {
                if(!visited[num]) {
                    visited[num] = 1;
                    q.push(num);
                }
            }
        }

        return false;
    }
};