class Solution {
public:
    
    int find(int p, vector<int>&id) {
        int root = p;
        while(root != id[root]) root = id[root];
        while(p != root) {
            int next = id[p];
            id[p] = root;
            p = next;
        }
        return root;
    }
    bool connected(int p, int q, vector<int>& id) {
        return find(p,id) == find(q,id);
    }
    void unify(int p ,int q, vector<int>& id,vector<int>& sz, int& mx) {
        if(connected(p,q,id)) return;
        int root1 = find(p,id);
        int root2 = find(q,id);
        
        if(sz[root1]<sz[root2]) {
            sz[root2] += sz[root1];
            id[root1] = root2;
            sz[root1] = 0;
            mx = max(mx, sz[root2]);
        } else {
            sz[root1] += sz[root2];
            id[root2] = root1;
            sz[root2] = 0;
            mx = max(mx,sz[root1]);
        }
    }
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        vector<int>v(nums.size());
        vector<int>sz(nums.size());
        map<int,int>m;
        int mx = 1;
        for(int i=0; i<nums.size(); i++) {
            v[i] = i;
            m[nums[i]] = i+1;
            sz[i] = 1;
        }
        for(int i=0; i<nums.size(); i++) {
            if(m[nums[i]+1]) {
                unify(m[nums[i]]-1,m[nums[i]+1]-1,v,sz,mx);
            }
        }
        return mx;
    }
};