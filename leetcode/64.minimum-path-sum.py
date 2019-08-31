#
# @lc app=leetcode id=64 lang=python3
#
# [64] Minimum Path Sum
#
# https://leetcode.com/problems/minimum-path-sum/description/
#
# algorithms
# Medium (47.92%)
# Total Accepted:    247.9K
# Total Submissions: 517.4K
# Testcase Example:  '[[1,3,1],[1,5,1],[4,2,1]]'
#
# Given a m x n grid filled with non-negative numbers, find a path from top
# left to bottom right which minimizes the sum of all numbers along its path.
#
# Note: You can only move either down or right at any point in time.
#
# Example:
#
#
# Input:
# [
# [1,3,1],
# ⁠ [1,5,1],
# ⁠ [4,2,1]
# ]
# Output: 7
# Explanation: Because the path 1→3→1→1→1 minimizes the sum.
#
#
#
class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        dp = [[1 << 31 for j in range(len(grid[0])+1)] for i in range(len(grid)+1)]
        dp[0][1] = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                dp[i+1][j+1] = min(dp[i][j+1], dp[i+1][j]) + grid[i][j]
        return dp[len(grid)][len(grid[0])]
