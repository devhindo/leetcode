# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        
        h = max(p.val,q.val)
        l = min(p.val,q.val)
        
        def search(n):
            nonlocal l,h
            if not n:
                return None
            if n.val > l and n.val < h:
                return n
            
            if n.val == p.val:
                return n
            
            if n.val == q.val:
                return n
            
            return search(n.left) or search(n.right)
            
            
            
        return search(root)