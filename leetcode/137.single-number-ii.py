#
# @lc app=leetcode id=137 lang=python3
#
# [137] Single Number II
#
# https://leetcode.com/problems/single-number-ii/description/
#
# algorithms
# Medium (46.41%)
# Total Accepted:    172.6K
# Total Submissions: 371.3K
# Testcase Example:  '[2,2,3,2]'
#
# Given a non-empty array of integers, every element appears three times except
# for one, which appears exactly once. Find that single one.
#
# Note:
#
# Your algorithm should have a linear runtime complexity. Could you implement
# it without using extra memory?
#
# Example 1:
#
#
# Input: [2,2,3,2]
# Output: 3
#
#
# Example 2:
#
#
# Input: [0,1,0,1,0,1,99]
# Output: 99
#
#
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        one, two = 0, 0
        for i in range(len(nums)):
            one = (one ^ nums[i]) & ~two
            two = (two ^ nums[i]) & ~one
        return one
# 大致的思路就是统计每一数位上1的个数，如果能够能够整除3就是0，反之就是1，再次提供一种高效的做法，充分的利用了位运算并且可以扩展到出现次数大于3的情况
'''
class solution:
    # 四个重复出现的
    def singleNumber(self, nums):
        one, two, three = 0, 0, 0
        for i in range(len(nums)):
            one = (one ^ nums[i]) & ~two & ~three
            two = (two ^ nums[i]) & ~one & ~three
            three = (three ^ nums[i]) & ~two & ~one
        return one, two, three
s = solution()
s.sigleNumber([2, 2, 2, 2, 4, 3, 3])
'''
