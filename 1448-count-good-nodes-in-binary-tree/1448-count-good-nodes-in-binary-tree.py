# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        
        c = 0
        
        def search(n,m):
            
            if not n:
                return
            
            if n.val >= m:
                nonlocal c
                c += 1
            
            m = max(m,n.val)
            
            search(n.left,m)
            search(n.right,m)
            
            
        search(root,float('-inf'))
        return c
            
        