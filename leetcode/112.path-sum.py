#
# @lc app=leetcode id=112 lang=python3
#
# [112] Path Sum
#
# https://leetcode.com/problems/path-sum/description/
#
# algorithms
# Easy (38.24%)
# Total Accepted:    334.8K
# Total Submissions: 874.1K
# Testcase Example:  '[5,4,8,11,null,13,4,7,2,null,null,null,1]\n22'
#
# Given a binary tree and a sum, determine if the tree has a root-to-leaf path
# such that adding up all the values along the path equals the given sum.
#
# Note: A leaf is a node with no children.
#
# Example:
#
# Given the below binary tree and sum = 22,
#
#
# ⁠     5
# ⁠    / \
# ⁠   4   8
# ⁠  /   / \
# ⁠ 11  13  4
# ⁠/  \      \
# 7    2      1
#
#
# return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
#
#
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        if not root:
            return False

        def _hasPathSum(root, cur_sum, sum):
            if not root.left and not root.right:
                if cur_sum == sum:
                    return True
                else:
                    return False
            res = False
            if root.left:
                res = res or _hasPathSum(root.left, cur_sum + root.left.val, sum)
            if root.right:
                res = res or _hasPathSum(root.right, cur_sum + root.right.val, sum)
            return res
        return _hasPathSum(root, root.val, sum)

