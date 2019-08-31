#
# @lc app=leetcode id=11 lang=python3
#
# [11] Container With Most Water
#
# https://leetcode.com/problems/container-with-most-water/description/
#
# algorithms
# Medium (45.45%)
# Total Accepted:    400.9K
# Total Submissions: 882.2K
# Testcase Example:  '[1,8,6,2,5,4,8,3,7]'
#
# Given n non-negative integers a1, a2, ..., an , where each represents a point
# at coordinate (i, ai). n vertical lines are drawn such that the two endpoints
# of line i is at (i, ai) and (i, 0). Find two lines, which together with
# x-axis forms a container, such that the container contains the most water.
# 
# Note: You may not slant the container and n is at least 2.
# 
# 
# 
# 
# 
# The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In
# this case, the max area of water (blue section) the container can contain is
# 49. 
# 
# 
# 
# Example:
# 
# 
# Input: [1,8,6,2,5,4,8,3,7]
# Output: 49
# 
#
class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxContainer, left, right = 0, 0, len(height) - 1
        while left < right:
            if height[left] < height[right]:
                contain = height[left] * ( right - left)
                if contain > maxContainer:
                    maxContainer = contain
                left += 1
            else: 
                contain = height[right] * ( right - left)
                if contain > maxContainer:
                    maxContainer = contain
                right -= 1
        return maxContainer
'''
这道题精妙之处在于使用了二分的思想，从最大容量开始找，这样就可以把复杂度降低到o(n)
'''