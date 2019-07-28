#
# @lc app=leetcode id=52 lang=python3
#
# [52] N-Queens II
#
# https://leetcode.com/problems/n-queens-ii/description/
#
# algorithms
# Hard (52.66%)
# Total Accepted:    103.8K
# Total Submissions: 196.6K
# Testcase Example:  '4'
#
# The n-queens puzzle is the problem of placing n queens on an n×n chessboard
# such that no two queens attack each other.
#
#
#
# Given an integer n, return the number of distinct solutions to the n-queens
# puzzle.
#
# Example:
#
#
# Input: 4
# Output: 2
# Explanation: There are two distinct solutions to the 4-queens puzzle as shown
# below.
# [
# [".Q..",  // Solution 1
# "...Q",
# "Q...",
# "..Q."],
#
# ["..Q.",  // Solution 2
# "Q...",
# "...Q",
# ".Q.."]
# ]
#
#
#
class Solution:
    def totalNQueens(self, n: int) -> int:
        total = [0]
        q_list = [0 for _ in range(n)]

        def _total(n, q_list, row, total):
            if row == n:
                total[0] += 1
                return
            for col in range(n):
                if isConfict(q_list, row, col):
                    q_list[row] = col
                    _total(n, q_list, row + 1, total)

        def isConfict(q_list, row, col):
            for i in range(row):
                if q_list[i] == col - row + i:
                    return False
                if q_list[i] == col + row - i:
                    return False
                if q_list[i] == col:
                    return False
            return True
        _total(n, q_list, 0, total)
        return total[0]

# 经典的dps题目，记录一下
