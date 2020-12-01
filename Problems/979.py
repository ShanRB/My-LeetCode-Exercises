# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    moves = 0
    def distributeCoins(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        
        def calSteps(root):
            if not root:
                return 0
            left = calSteps(root.left)
            right = calSteps(root.right)
            self.moves += abs(left) + abs(right)
            return root.val - 1 + left + right
        calSteps(root)
        return self.moves
        