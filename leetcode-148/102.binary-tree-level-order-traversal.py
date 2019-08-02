#
# @lc app=leetcode id=102 lang=python3
#
# [102] Binary Tree Level Order Traversal
#
# https://leetcode.com/problems/binary-tree-level-order-traversal/description/
#
# algorithms
# Medium (49.32%)
# Total Accepted:    407.4K
# Total Submissions: 824.3K
# Testcase Example:  '[3,9,20,null,null,15,7]'
#
# Given a binary tree, return the level order traversal of its nodes' values.
# (ie, from left to right, level by level).
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
# return its level order traversal as:
#
# [
# ⁠ [3],
# ⁠ [9,20],
# ⁠ [15,7]
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
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        res = []
        if not root:
            return res
        queue = deque()
        queue.append(root)
        nextLevel, toBePrint, levelList = 0, 1, []
        while len(queue):
            node = queue.popleft()
            levelList.append(node.val)
            if node.left:
                nextLevel += 1
                queue.append(node.left)
            if node.right:
                nextLevel += 1
                queue.append(node.right)
            toBePrint -= 1
            if toBePrint == 0:
                res.append(levelList)
                levelList = []
                toBePrint = nextLevel
                nextLevel = 0
        return res
