/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void dfs(TreeNode* root,vector<int>&v) {
        if(!root) return;
        v.push_back(root->val);
        dfs(root->right,v);
        dfs(root->left,v);
        
    }
public:
    int minDiffInBST(TreeNode* root) {
        vector<int>v;
        dfs(root,v);
        sort(v.begin(),v.end());
        int m=INT_MAX;
        for(int i=0; i<v.size()-1; i++) {
            m = min(m,v[i+1]-v[i]);
        }
        return m;
    }
};