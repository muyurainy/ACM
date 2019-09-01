#
# @lc app=leetcode id=108 lang=python3
#
# [108] Convert Sorted Array to Binary Search Tree
#
# https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
#
# algorithms
# Easy (52.23%)
# Total Accepted:    291.3K
# Total Submissions: 556.3K
# Testcase Example:  '[-10,-3,0,5,9]'
#
# Given an array where elements are sorted in ascending order, convert it to a
# height balanced BST.
#
# For this problem, a height-balanced binary tree is defined as a binary tree
# in which the depth of the two subtrees of every node never differ by more
# than 1.
#
# Example:
#
#
# Given the sorted array: [-10,-3,0,5,9],
#
# One possible answer is: [0,-3,9,-10,null,5], which represents the following
# height balanced BST:
#
# ⁠     0
# ⁠    / \
# ⁠  -3   9
# ⁠  /   /
# ⁠-10  5
#
#
#
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:
        def _sortedArrayToBST(nums, l, h):
            if l > h:
                return None
            mid = (l + h) // 2
            root = TreeNode(nums[mid])
            root.left = _sortedArrayToBST(nums, l, mid - 1)
            root.right = _sortedArrayToBST(nums, mid + 1, h)
            return root
        return _sortedArrayToBST(nums, 0, len(nums) - 1)

'''
- 二叉查找树
'''
