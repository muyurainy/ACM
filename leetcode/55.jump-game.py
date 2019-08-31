#
# @lc app=leetcode id=55 lang=python3
#
# [55] Jump Game
#
# https://leetcode.com/problems/jump-game/description/
#
# algorithms
# Medium (32.27%)
# Total Accepted:    284.6K
# Total Submissions: 881.4K
# Testcase Example:  '[2,3,1,1,4]'
#
# Given an array of non-negative integers, you are initially positioned at the
# first index of the array.
#
# Each element in the array represents your maximum jump length at that
# position.
#
# Determine if you are able to reach the last index.
#
# Example 1:
#
#
# Input: [2,3,1,1,4]
# Output: true
# Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
#
#
# Example 2:
#
#
# Input: [3,2,1,0,4]
# Output: false
# Explanation: You will always arrive at index 3 no matter what. Its
# maximum
# jump length is 0, which makes it impossible to reach the last index.
#
#
#
class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if len(nums) <= 0:
            return False
        if len(nums) == 1:
            return True
        cur_max_step = 0
        for i in range(len(nums) - 1):
            cur_max_step = max(cur_max_step, nums[i]) - 1
            if cur_max_step < 0:
                return False
        return True

# 巧用动态规划解决，cur_max_step表示走到当前节点剩余的最大步数
