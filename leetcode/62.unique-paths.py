#
# @lc app=leetcode id=62 lang=python3
#
# [62] Unique Paths
#
# https://leetcode.com/problems/unique-paths/description/
#
# algorithms
# Medium (48.21%)
# Total Accepted:    305.1K
# Total Submissions: 632.7K
# Testcase Example:  '3\n2'
#
# A robot is located at the top-left corner of a m x n grid (marked 'Start' in
# the diagram below).
#
# The robot can only move either down or right at any point in time. The robot
# is trying to reach the bottom-right corner of the grid (marked 'Finish' in
# the diagram below).
#
# How many possible unique paths are there?
#
#
# Above is a 7 x 3 grid. How many possible unique paths are there?
#
# Note: m and n will be at most 100.
#
# Example 1:
#
#
# Input: m = 3, n = 2
# Output: 3
# Explanation:
# From the top-left corner, there are a total of 3 ways to reach the
# bottom-right corner:
# 1. Right -> Right -> Down
# 2. Right -> Down -> Right
# 3. Down -> Right -> Right
#
#
# Example 2:
#
#
# Input: m = 7, n = 3
# Output: 28
#
#
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:

        dp = [[0 for j in range(m + 1)] for i in range(n + 1)]
        dp[0][1] = 1
        for i in range(1, n+1):
            for j in range(1, m+1):
                dp[i][j] = dp[i-1][j] + dp[i][j-1]
        return dp[n][m]
