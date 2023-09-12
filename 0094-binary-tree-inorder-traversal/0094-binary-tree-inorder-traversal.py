# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        
        l = []
        
        def inorder(n):
            if not n:
                return
            
            if n.left:
                inorder(n.left)
                
            l.append(n.val)
            
            if n.right:
                inorder(n.right)
        
        inorder(root)
        
        return l