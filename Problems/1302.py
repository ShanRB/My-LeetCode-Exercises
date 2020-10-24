# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: TreeNode) -> int:
        
        def helper(root):
            if root.left is None and root.right is None:
                return (1,root.val)
            elif root.right is None:
                depth,accval = helper(root.left)
                return (1+depth,accval)
            elif root.left is None:
                depth,accval = helper(root.right)
                return (1+depth,accval)
            else:
                depth1,accval1 = helper(root.left)
                depth2,accval2 = helper(root.right)
                if depth1 > depth2:
                    return (1+depth1,accval1)
                if depth1 < depth2:
                    return (1+depth2,accval2)
                if depth1 == depth2:
                    return (1+depth1, accval1+accval2)
        
        return helper(root)[1]