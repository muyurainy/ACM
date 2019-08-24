#
# @lc app=leetcode id=34 lang=python3
#
# [34] Find First and Last Position of Element in Sorted Array
#
# https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
#
# algorithms
# Medium (33.94%)
# Total Accepted:    335.8K
# Total Submissions: 986.2K
# Testcase Example:  '[5,7,7,8,8,10]\n8'
#
# Given an array of integers nums sorted in ascending order, find the starting
# and ending position of a given target value.
#
# Your algorithm's runtime complexity must be in the order of O(log n).
#
# If the target is not found in the array, return [-1, -1].
#
# Example 1:
#
#
# Input: nums = [5,7,7,8,8,10], target = 8
# Output: [3,4]
#
# Example 2:
#
#
# Input: nums = [5,7,7,8,8,10], target = 6
# Output: [-1,-1]
#
#
class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l, h = 0, len(nums) - 1
        res = [-1, -1]
        while l <= h:
            mid = (l + h) // 2
            if nums[mid] == target:
                index = mid
                while index < len(nums) and nums[index] == target:
                    index += 1
                res[1] = index - 1
                index = mid
                while index >= 0 and nums[index] == target:
                    index -= 1
                res[0] = index + 1
                return res
            elif nums[mid] > target:
                h = mid - 1
            else:
                l = mid + 1
        return res

'''
- 二分
'''
