class Solution {
public:
    int find(int n, vector<int>&v) {
        int root = n;
        while(root != v[root]) root = v[root];
        while(n != root) {
            int next = v[n];
            v[n] = root;
            n = next;
        }
        return root;
    }
    bool connected(int p, int q, vector<int>& v) {
        return find(p,v) == find(q,v);
    }
    void unify(int p, int q, vector<int>& v, int& n) {
        if(connected(p,q,v)) return;
        int r1 = find(p,v);
        int r2 = find(q,v);
        v[r1] = r2;
        n--;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>v(isConnected.size());
        for(int i=0; i<isConnected.size(); i++) {
            v[i] = i;
        }
        for(int i=0; i<isConnected.size(); i++) {
            for(int j=0; j<isConnected[i].size(); j++) {
                if(isConnected[i][j]) {
                    unify(i,j,v,n);
                }
            }
        }
        return n;
    }
};