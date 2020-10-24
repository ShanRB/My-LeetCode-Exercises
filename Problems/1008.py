# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def bstFromPreorder(self, preorder):
        """
        :type preorder: List[int]
        :rtype: TreeNode
        """
        root = TreeNode(preorder[0])
        
        def insert(node,val):
            if val > node.val:
                if node.right is None:
                    node.right = TreeNode(val)
                    return
                else:
                    insert(node.right,val)
            else:
                if node.left is None:
                    node.left = TreeNode(val)
                    return
                else:
                    insert(node.left,val)
                    
        for i in range(1,len(preorder)):
            insert(root,preorder[i])
        
        return root
    