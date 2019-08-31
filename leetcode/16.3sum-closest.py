#
# @lc app=leetcode id=16 lang=python3
#
# [16] 3Sum Closest
#
# https://leetcode.com/problems/3sum-closest/description/
#
# algorithms
# Medium (45.79%)
# Total Accepted:    372.3K
# Total Submissions: 813.4K
# Testcase Example:  '[-1,2,1,-4]\n1'
#
# Given an array nums of n integers and an integer target, find three integers
# in nums such that the sum is closest to target. Return the sum of the three
# integers. You may assume that each input would have exactly one solution.
#
# Example:
#
#
# Given array nums = [-1, 2, 1, -4], and target = 1.
#
# The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
#
#
#
class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        i, l, r = 0, 1, len(nums) - 1
        res = 1 << 31
        nums = sorted(nums)
        while i < len(nums) - 2:
            if nums[l] + nums[l + 1] + nums[i] > target:
                if abs(target - (nums[l] + nums[l + 1] + nums[i])) < abs(target - res):
                    res = nums[l] + nums[l + 1] + nums[i]
            elif nums[r] + nums[r - 1] + nums[i] < target:
                if abs(target - (nums[r] + nums[r - 1] + nums[i])) < abs(target - res):
                    res = nums[r] + nums[r - 1] + nums[i]
            else:
                while l < r:
                    if abs(target - (nums[l] + nums[r] + nums[i])) < abs(target - res):
                        res = nums[r] + nums[l] + nums[i]
                    if nums[l] + nums[r] + nums[i] > target:
                        r -= 1
                    elif nums[l] + nums[r] + nums[i] < target:
                        l += 1
                    else:
                        return target
            i += 1
            l = i + 1
            r = len(nums) - 1
        return res

'''
- 指针对撞
- 数组
- 剪枝
'''
