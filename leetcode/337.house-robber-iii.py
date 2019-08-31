#
# @lc app=leetcode id=337 lang=python3
#
# [337] House Robber III
#
# https://leetcode.com/problems/house-robber-iii/description/
#
# algorithms
# Medium (48.70%)
# Total Accepted:    113.6K
# Total Submissions: 233.1K
# Testcase Example:  '[3,2,3,null,3,null,1]'
#
# The thief has found himself a new place for his thievery again. There is only
# one entrance to this area, called the "root." Besides the root, each house
# has one and only one parent house. After a tour, the smart thief realized
# that "all houses in this place forms a binary tree". It will automatically
# contact the police if two directly-linked houses were broken into on the same
# night.
#
# Determine the maximum amount of money the thief can rob tonight without
# alerting the police.
#
# Example 1:
#
#
# Input: [3,2,3,null,3,null,1]
#
# ⁠    3
# ⁠   / \
# ⁠  2   3
# ⁠   \   \
# ⁠    3   1
#
# Output: 7
# Explanation: Maximum amount of money the thief can rob = 3 + 3 + 1 = 7.
#
# Example 2:
#
#
# Input: [3,4,5,1,3,null,1]
#
# 3
# ⁠   / \
# ⁠  4   5
# ⁠ / \   \
# ⁠1   3   1
#
# Output: 9
# Explanation: Maximum amount of money the thief can rob = 4 + 5 = 9.
#
#
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def rob(self, root: TreeNode) -> int:
        def dfs(root):
            # from bottom to top
            if not root:
                return [0, 0]
            robleft = dfs(root.left)
            robright = dfs(root.right)
            norobcurr = robleft[1] + robright[1]
            robcurr = max(root.val + robleft[0] + robright[0], norobcurr)
            return [norobcurr, robcurr]
        return dfs(root)[1]



'''
-  树
- 经典
最初用如下解法，超时，随后参考网上的解法, 记忆法，真的妙
class Solution:
    def rob(self, root: TreeNode) -> int:
        if not root:
            return 0
        val = root.val
        if root.left:
            val += (self.rob(root.left.left) + self.rob(root.left.right))
        if root.right:
            val += (self.rob(root.right.left) + self.rob(root.right.right))
        return max(val, self.rob(root.left) + self.rob(root.right))
'''
