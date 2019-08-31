#
# @lc app=leetcode id=45 lang=python3
#
# [45] Jump Game II
#
# https://leetcode.com/problems/jump-game-ii/description/
#
# algorithms
# Hard (28.50%)
# Total Accepted:    183.7K
# Total Submissions: 643.5K
# Testcase Example:  '[2,3,1,1,4]'
#
# Given an array of non-negative integers, you are initially positioned at the
# first index of the array.
#
# Each element in the array represents your maximum jump length at that
# position.
#
# Your goal is to reach the last index in the minimum number of jumps.
#
# Example:
#
#
# Input: [2,3,1,1,4]
# Output: 2
# Explanation: The minimum number of jumps to reach the last index is 2.
# ⁠   Jump 1 step from index 0 to 1, then 3 steps to the last index.
#
# Note:
#
# You can assume that you can always reach the last index.
#
#
class Solution:
    def jump(self, nums: List[int]) -> int:
        if len(nums) <= 1:
            return 0
        last_max, times, cur_max = nums[0], 1, nums[0]
        index = 1
        while index < len(nums):
            if last_max >= len(nums) - 1:
                return times
            while index < last_max:
                cur_max = max(cur_max, nums[index] + index)
                index += 1
            last_max = max(nums[last_max] + last_max, cur_max)
            times += 1
            index += 1

