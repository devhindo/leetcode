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
public:
    void calc(TreeNode* r,vector<int>&v) {
        if(!r) {
            return;
        }
        if(!r->left && !r->right) {
            v.push_back(r->val);
            return;
        } else {
            calc(r->left,v);
            calc(r->right,v);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        calc(root1,v1);
        calc(root2,v2);
        return v1==v2;
    }
};