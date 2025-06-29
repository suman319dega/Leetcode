bool topo_sort(vector<vector<int>>& adj, int n) {
    vector<int> in(n,0);
    queue<int> q;
    for(int i=0; i<n; i++) {
        for(int num : adj[i]) {
            in[num] += 1;
        }
    }
    for(int i=0; i<n; i++) {
        if(in[i] == 0) q.push(i);
    }
    vector<int> ans;
    while(!q.empty()) {
        int a = q.front();
        q.pop();
        ans.push_back(a);
        for(int num : adj[a]) {
            in[num] -= 1;
            if(in[num] == 0) q.push(num);
        }
    }
    return ans.size() == n;
}


class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<vector<int>> adj(n);
         for(auto &pre : prerequisites) {
            int course = pre[0];
            int prereq = pre[1];
            adj[prereq].push_back(course);  
        }
        bool res = topo_sort(adj,n);
        return res;
    }
};