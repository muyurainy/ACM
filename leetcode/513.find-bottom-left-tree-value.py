#
# @lc app=leetcode id=513 lang=python3
#
# [513] Find Bottom Left Tree Value
#
# https://leetcode.com/problems/find-bottom-left-tree-value/description/
#
# algorithms
# Medium (59.13%)
# Total Accepted:    78.8K
# Total Submissions: 133.2K
# Testcase Example:  '[2,1,3]'
#
#
# Given a binary tree, find the leftmost value in the last row of the tree.
#
#
# Example 1:
#
# Input:
#
# ⁠   2
# ⁠  / \
# ⁠ 1   3
#
# Output:
# 1
#
#
#
# ⁠ Example 2:
#
# Input:
#
# ⁠       1
# ⁠      / \
# ⁠     2   3
# ⁠    /   / \
# ⁠   4   5   6
# ⁠      /
# ⁠     7
#
# Output:
# 7
#
#
#
# Note:
# You may assume the tree (i.e., the given root node) is not NULL.
#
#
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

from collections import deque
class Solution:
    def findBottomLeftValue(self, root: TreeNode) -> int:
        if not root:
            return None
        queue = deque([root])
        res = root
        while len(queue) != 0:
            cnt = len(queue)
            for i in range(cnt):
                node = queue.popleft()
                if i == 0:
                    res = node
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return res.val

'''
- 树
- BFS
'''
