""" 
Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).

The binary search tree is guaranteed to have unique values.
"""
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: TreeNode, L: int, R: int) -> int:
        if root is None:
            return 0
        if L <= root.val <= R:
            return root.val + self.rangeSumBST(root.left,L,R)+self.rangeSumBST(root.right,L,R)
        else:
            return self.rangeSumBST(root.left,L,R)+self.rangeSumBST(root.right,L,R)