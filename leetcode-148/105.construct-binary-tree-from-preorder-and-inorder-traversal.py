#
# @lc app=leetcode id=105 lang=python3
#
# [105] Construct Binary Tree from Preorder and Inorder Traversal
#
# https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/
#
# algorithms
# Medium (42.32%)
# Total Accepted:    242.7K
# Total Submissions: 572.3K
# Testcase Example:  '[3,9,20,15,7]\n[9,3,15,20,7]'
#
# Given preorder and inorder traversal of a tree, construct the binary tree.
#
# Note:
# You may assume that duplicates do not exist in the tree.
#
# For example, given
#
#
# preorder = [3,9,20,15,7]
# inorder = [9,3,15,20,7]
#
# Return the following binary tree:
#
#
# ⁠   3
# ⁠  / \
# ⁠ 9  20
# ⁠   /  \
# ⁠  15   7
#
#
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> TreeNode:
        if len(preorder) == 0 or len(inorder) == 0:
            return None

        def _buildTree(preorder, inorder, pre_left, pre_right, in_left, in_right):
            if pre_left == pre_right:
                return TreeNode(preorder[pre_left])
            root_val = preorder[pre_left]
            root = TreeNode(root_val)
            for i in range(in_left, in_right+1):
                if inorder[i] == root_val:
                    in_root_index = i
            left_len = in_root_index - in_left
            if left_len != 0:
                root.left = _buildTree(
                    preorder, inorder,
                    pre_left + 1,  pre_left + left_len,
                    in_left, in_root_index - 1)
            if in_right - in_root_index != 0:
                root.right = _buildTree(
                    preorder, inorder,
                    pre_left + left_len + 1,  pre_right,
                    in_root_index + 1, in_right)
            return root
        return _buildTree(preorder, inorder, 0, len(preorder) - 1, 0, len(inorder) - 1)
