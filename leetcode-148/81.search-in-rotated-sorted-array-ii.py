#
# @lc app=leetcode id=81 lang=python3
#
# [81] Search in Rotated Sorted Array II
#
# https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/
#
# algorithms
# Medium (32.71%)
# Total Accepted:    181.3K
# Total Submissions: 554.2K
# Testcase Example:  '[2,5,6,0,0,1,2]\n0'
#
# Suppose an array sorted in ascending order is rotated at some pivot unknown
# to you beforehand.
#
# (i.e., [0,0,1,2,2,5,6] might become [2,5,6,0,0,1,2]).
#
# You are given a target value to search. If found in the array return true,
# otherwise return false.
#
# Example 1:
#
#
# Input: nums = [2,5,6,0,0,1,2], target = 0
# Output: true
#
#
# Example 2:
#
#
# Input: nums = [2,5,6,0,0,1,2], target = 3
# Output: false
#
# Follow up:
#
#
# This is a follow up problem to Search in Rotated Sorted Array, where nums may
# contain duplicates.
# Would this affect the run-time complexity? How and why?
#
#
#
class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        left, right = 0, len(nums) - 1
        while left < right:
            med = (left + right) // 2
            if nums[med] == target:
                return True
            if nums[right] >= target:
                left = med + 1
            else:
                right = med - 1
        for i in range(len(nums)):
            if nums[i] == target:
                return True
        return False

# 二分变体，关键的点就是要注意有可能出现特殊情况：[1,1,1,1,1,0,1,1,1]
