#
# @lc app=leetcode id=51 lang=python3
#
# [51] N-Queens
#
# https://leetcode.com/problems/n-queens/description/
#
# algorithms
# Hard (40.50%)
# Total Accepted:    154K
# Total Submissions: 376.8K
# Testcase Example:  '4'
#
# The n-queens puzzle is the problem of placing n queens on an n×n chessboard
# such that no two queens attack each other.
#
#
#
# Given an integer n, return all distinct solutions to the n-queens puzzle.
#
# Each solution contains a distinct board configuration of the n-queens'
# placement, where 'Q' and '.' both indicate a queen and an empty space
# respectively.
#
# Example:
#
#
# Input: 4
# Output: [
# ⁠[".Q..",  // Solution 1
# ⁠ "...Q",
# ⁠ "Q...",
# ⁠ "..Q."],
#
# ⁠["..Q.",  // Solution 2
# ⁠ "Q...",
# ⁠ "...Q",
# ⁠ ".Q.."]
# ]
# Explanation: There exist two distinct solutions to the 4-queens puzzle as
# shown above.
#
#
#

class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        queen_pos = [0 for i in range(n)]
        res = []

        def _solveNQueens(row):
            if row == n:
                res.append(queen_pos.copy())
            for col in range(n):
                flag = True
                for i in range(row):
                    if queen_pos[i] == col or abs(queen_pos[i] - col) == row - i:
                        flag = False
                        break
                if flag:
                    queen_pos[row] = col
                    _solveNQueens(row + 1)

        def print_q(pos):
            string_list = ['.'] * n
            string_list[pos] = 'Q'
            return ''.join(string_list)

        _solveNQueens(0)
        res_print = []
        for item in res:
            tmp = []
            for j in item:
                tmp.append(print_q(j))
            res_print.append(tmp)
        return res_print

'''
- 回溯
'''
