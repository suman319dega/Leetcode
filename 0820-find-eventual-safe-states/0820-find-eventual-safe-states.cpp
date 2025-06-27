bool dfs(int cur,vector<int>& visited,vector<int>& path,vector<vector<int>>& graph,vector<int>& ans) {
    visited[cur] = 1 , path[cur] = 1;
    for(int num : graph[cur]) {
        if(!visited[num]) {
            if(dfs(num,visited,path,graph,ans)) return true;
        }
        else {
            if(path[num] == 1) return true;
        }
    }
    ans.push_back(cur);
    path[cur] = 0;
    return false;
}

class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> visited(n,0);
        vector<int> path(n,0);
        vector<int> ans;
        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                dfs(i,visited,path,graph,ans);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};