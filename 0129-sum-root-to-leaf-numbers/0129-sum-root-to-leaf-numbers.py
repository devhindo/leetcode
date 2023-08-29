# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        
        t = 0
        
        def dfs(n,s):
            if not n:
                return
            
            s += str(n.val)
            
            if not n.left and not n.right:
                
                f = int(s)
                nonlocal t
                t += f
            
            if n.left:
                dfs(n.left,s)
                
            if n.right:
                dfs(n.right,s)
                    
        dfs(root,"")
        
        return t