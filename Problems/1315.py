""" 
Given a binary tree, return the sum of values of nodes with even-valued grandparent.  (A grandparent of a node is the parent of its parent, if it exists.)

If there are no nodes with an even-valued grandparent, return 0.
"""
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumEvenGrandparent(self, root: TreeNode) -> int:
        
        def traverse(node, parent, grand):
            if node is None:
                return 0
            if node.val % 2 == 0:
                temp = True
            else:
                temp = False
            if grand:
                value = node.val
            else:
                value = 0
            return value + traverse(node.left,temp,parent)+traverse(node.right,temp,parent)
        
        return traverse(root,False,False)