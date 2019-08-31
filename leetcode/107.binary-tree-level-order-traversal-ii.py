#
# @lc app=leetcode id=107 lang=python3
#
# [107] Binary Tree Level Order Traversal II
#
# https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/
#
# algorithms
# Easy (47.67%)
# Total Accepted:    239.4K
# Total Submissions: 502.1K
# Testcase Example:  '[3,9,20,null,null,15,7]'
#
# Given a binary tree, return the bottom-up level order traversal of its nodes'
# values. (ie, from left to right, level by level from leaf to root).
#
#
# For example:
# Given binary tree [3,9,20,null,null,15,7],
#
# ⁠   3
# ⁠  / \
# ⁠ 9  20
# ⁠   /  \
# ⁠  15   7
#
#
#
# return its bottom-up level order traversal as:
#
# [
# ⁠ [15,7],
# ⁠ [9,20],
# ⁠ [3]
# ]
#
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
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        if not root:
            return []
        res = []
        tmp = []
        thisLevel = 1
        nextLevel = 0
        queue = deque([root])
        while len(queue):
            node = queue.popleft()
            tmp.append(node.val)
            if node.left:
                queue.append(node.left)
                nextLevel += 1
            if node.right:
                queue.append(node.right)
                nextLevel += 1
            thisLevel -= 1
            if thisLevel == 0:
                thisLevel = nextLevel
                nextLevel = 0
                res.insert(0, tmp)
                tmp = []
        return res


