#
# @lc app=leetcode id=63 lang=python3
#
# [63] Unique Paths II
#
# https://leetcode.com/problems/unique-paths-ii/description/
#
# algorithms
# Medium (33.59%)
# Total Accepted:    218.1K
# Total Submissions: 648.7K
# Testcase Example:  '[[0,0,0],[0,1,0],[0,0,0]]'
#
# A robot is located at the top-left corner of a m x n grid (marked 'Start' in
# the diagram below).
#
# The robot can only move either down or right at any point in time. The robot
# is trying to reach the bottom-right corner of the grid (marked 'Finish' in
# the diagram below).
#
# Now consider if some obstacles are added to the grids. How many unique paths
# would there be?
#
#
#
# An obstacle and empty space is marked as 1 and 0 respectively in the grid.
#
# Note: m and n will be at most 100.
#
# Example 1:
#
#
# Input:
# [
# [0,0,0],
# [0,1,0],
# [0,0,0]
# ]
# Output: 2
# Explanation:
# There is one obstacle in the middle of the 3x3 grid above.
# There are two ways to reach the bottom-right corner:
# 1. Right -> Right -> Down -> Down
# 2. Down -> Down -> Right -> Right
#
#
#
'''
回溯法超时
class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        self.res = 0

        def _uniquePathsWithObstacles(row, col):
            if row == len(obstacleGrid) - 1 and col == len(obstacleGrid[0]) - 1:
                if obstacleGrid[row][col] == 0:
                    self.res += 1
                return
            if obstacleGrid[row][col] == 1:
                return
            if row + 1 < len(obstacleGrid) and obstacleGrid[row+1][col] == 0:
                _uniquePathsWithObstacles(row + 1, col)
            if col + 1 < len(obstacleGrid[0]) and obstacleGrid[row][col + 1] == 0:
                _uniquePathsWithObstacles(row, col + 1)
        _uniquePathsWithObstacles(0, 0)
        return self.res
'''

class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        m, n = len(obstacleGrid), len(obstacleGrid[0])
        dp = [[0 for i in range(n + 1)] for j in range(m + 1)]
        dp[0][1] = 1
        for i in range(1, m+1):
            for j in range(1, n+1):
                if obstacleGrid[i-1][j-1] == 0:
                    dp[i][j] = dp[i-1][j] + dp[i][j-1]
        return dp[m][n]


'''
- dp
'''
