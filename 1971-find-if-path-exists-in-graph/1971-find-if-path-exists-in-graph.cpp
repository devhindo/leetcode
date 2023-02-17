class Solution {
public:
    bool bfs(int s,int e,int n,list<int>* adj) {
        vector<int>v(n);
        v[s]=true;
        queue<int>q;
        q.push(s);
        while(!q.empty()) {
            int c = q.front();
            q.pop();
            if(c==e) return true;
            for(auto& node : adj[c]) {
                if(!v[node]) {
                    v[node] = true;
                    q.push(node);
                }
            }
        }
        return false;
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        list<int> *adj;
        adj = new list<int>[n];
        for(auto& v : edges) {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        return bfs(source,destination,n,adj);
    }
};