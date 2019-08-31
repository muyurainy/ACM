#
# @lc app=leetcode id=687 lang=python3
#
# [687] Longest Univalue Path
#
# https://leetcode.com/problems/longest-univalue-path/description/
#
# algorithms
# Easy (34.33%)
# Total Accepted:    65.9K
# Total Submissions: 191.7K
# Testcase Example:  '[5,4,5,1,1,5]'
#
# Given a binary tree, find the length of the longest path where each node in
# the path has the same value. This path may or may not pass through the root.
#
# The length of path between two nodes is represented by the number of edges
# between them.
#
#
#
# Example 1:
#
# Input:
#
#
# ⁠             5
# ⁠            / \
# ⁠           4   5
# ⁠          / \   \
# ⁠         1   1   5
#
#
# Output: 2
#
#
#
# Example 2:
#
# Input:
#
#
# ⁠             1
# ⁠            / \
# ⁠           4   5
# ⁠          / \   \
# ⁠         4   4   5
#
#
# Output: 2
#
#
#
# Note: The given binary tree has not more than 10000 nodes. The height of the
# tree is not more than 1000.
#
#
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def longestUnivaluePath(self, root: TreeNode) -> int:
        self.path = 0
        if not root:
            return self.path

        def _longestUnivaluePath(root):
            if not root:
                return 0
            left = _longestUnivaluePath(root.left)
            right = _longestUnivaluePath(root.right)
            if root.left and root.left.val == root.val:
                left_num = left + 1
            else:
                left_num = 0
            if root.right and root.right.val == root.val:
                right_num = right + 1
            else:
                right_num = 0
            self.path = max(self.path, left_num + right_num)
            return max(left_num, right_num)

        _longestUnivaluePath(root)
        return self.path

'''
- 树
'''
