#
# @lc app=leetcode id=7 lang=python3
#
# [7] Reverse Integer
#
# https://leetcode.com/problems/reverse-integer/description/
#
# algorithms
# Easy (25.40%)
# Total Accepted:    737.7K
# Total Submissions: 2.9M
# Testcase Example:  '123'
#
# Given a 32-bit signed integer, reverse digits of an integer.
# 
# Example 1:
# 
# 
# Input: 123
# Output: 321
# 
# 
# Example 2:
# 
# 
# Input: -123
# Output: -321
# 
# 
# Example 3:
# 
# 
# Input: 120
# Output: 21
# 
# 
# Note:
# Assume we are dealing with an environment which could only store integers
# within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of
# this problem, assume that your function returns 0 when the reversed integer
# overflows.
# 
#
class Solution:
    def reverse(self, x: int) -> int:
        tmp = 0
        MAXINT = (1 << 31)
        isNeg = 1
        if x < 0:
            x *= -1
            isNeg *= -1
        while x:
            num = x % 10
            x //= 10
            if tmp * 10 > MAXINT or tmp * 10 + num > MAXINT:
                return 0
            tmp = tmp * 10 + num
        return(tmp*isNeg)
