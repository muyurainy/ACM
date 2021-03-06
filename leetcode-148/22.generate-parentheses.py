#
# @lc app=leetcode id=22 lang=python3
#
# [22] Generate Parentheses
#
# https://leetcode.com/problems/generate-parentheses/description/
#
# algorithms
# Medium (55.77%)
# Total Accepted:    363K
# Total Submissions: 649.4K
# Testcase Example:  '3'
#
#
# Given n pairs of parentheses, write a function to generate all combinations
# of well-formed parentheses.
#
#
#
# For example, given n = 3, a solution set is:
#
#
# [
# ⁠ "((()))",
# ⁠ "(()())",
# ⁠ "(())()",
# ⁠ "()(())",
# ⁠ "()()()"
# ]
#
#
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []

        def dfs(n, res, left, right, s):
            if right == n:
                res.append(s)
                return
            if left < n:
                dfs(n, res, left + 1, right, s + '(')
            if right < left:
                dfs(n, res, left, right + 1, s + ')')
        dfs(n, res, 0, 0, '')
        return res
