# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        if root is not None and (root.right is not None
                                 or root.left is not None):
            tmp = root.right
            root.right = root.left
            root.left = tmp

            self.invertTree(root.right)
            self.invertTree(root.left)

        return root
