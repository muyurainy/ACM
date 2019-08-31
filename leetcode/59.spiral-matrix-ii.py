#
# @lc app=leetcode id=59 lang=python3
#
# [59] Spiral Matrix II
#
# https://leetcode.com/problems/spiral-matrix-ii/description/
#
# algorithms
# Medium (47.41%)
# Total Accepted:    143.1K
# Total Submissions: 301K
# Testcase Example:  '3'
#
# Given a positive integer n, generate a square matrix filled with elements
# from 1 to n2 in spiral order.
#
# Example:
#
#
# Input: 3
# Output:
# [
# ⁠[ 1, 2, 3 ],
# ⁠[ 8, 9, 4 ],
# ⁠[ 7, 6, 5 ]
# ]
#
#
#
class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        if n == 0:
            return []
        matrix = [[0 for i in range(n)] for j in range(n)]
        num = 1
        row_index = 0
        for row_index in range(n // 2):
            for col in range(row_index, n - row_index):
                matrix[row_index][col] = num
                num += 1
            for row in range(row_index + 1, n - row_index):
                matrix[row][n - row_index - 1] = num
                num += 1
            for col in range(row_index + 1, n - row_index):
                matrix[n - row_index - 1][n - col - 1] = num
                num += 1
            for row in range(row_index + 1, n - row_index - 1):
                matrix[n - row - 1][row_index] = num
                num += 1
        if n % 2 == 1:
            matrix[n // 2][n // 2] = num
        return matrix
