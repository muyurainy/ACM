#
# @lc app=leetcode id=53 lang=python3
#
# [53] Maximum Subarray
#
# https://leetcode.com/problems/maximum-subarray/description/
#
# algorithms
# Easy (43.96%)
# Total Accepted:    569K
# Total Submissions: 1.3M
# Testcase Example:  '[-2,1,-3,4,-1,2,1,-5,4]'
#
# Given an integer array nums, find the contiguous subarray (containing at
# least one number) which has the largest sum and return its sum.
#
# Example:
#
#
# Input: [-2,1,-3,4,-1,2,1,-5,4],
# Output: 6
# Explanation: [4,-1,2,1] has the largest sum = 6.
#
#
# Follow up:
#
# If you have figured out the O(n) solution, try coding another solution using
# the divide and conquer approach, which is more subtle.
#
#
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        result = nums[0]
        max_val = 0
        for i in nums:
            max_val += i
            if max_val < i:
                    max_val = i
            if max_val > result:
                result = max_val
        if result < 0:
            result = max(nums)
        return result
