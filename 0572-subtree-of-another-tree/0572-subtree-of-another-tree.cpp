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
    bool isSameTree(TreeNode* f, TreeNode* s) {
        if(!f && !s) return true;
        if(f && !s || s&& !f) return false;
        if(f->val != s->val) return false;
        return isSameTree(f->left, s->left) && isSameTree(f->right, s->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return isSameTree(root,subRoot) || ((root&&root->left) &&isSubtree(root->left,subRoot)) || ((root && root->right) &&isSubtree(root->right,subRoot));
    }
};