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
    
    
""" general tree solution - not a binary one

def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        
        pf = False
        qf = False
        
        pl = []
        ql = []
        
        def search(n,l):
            nonlocal pf
            nonlocal qf
            if pf and qf:
                return
            
            l.append(n)
            
            if n == p:
                nonlocal pl
                pl = l.copy()
                pf = True
                
            if n == q:
                nonlocal ql
                ql = l.copy()
                qf = True
            
            if n.left:
                search(n.left,l)
                
            if n.right:
                search(n.right,l)
                
            l.pop()
        
        search(root, [])
        
        limit = min(len(pl),len(ql))
        
        j = 0
        
        while j<limit:
            
            if pl[j] != ql[j]:
                return pl[j-1]
            j += 1
        
        return pl[limit-1]

"""