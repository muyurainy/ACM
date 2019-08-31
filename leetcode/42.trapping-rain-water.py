#
# @lc app=leetcode id=42 lang=python3
#
# [42] Trapping Rain Water
#
# https://leetcode.com/problems/trapping-rain-water/description/
#
# algorithms
# Hard (43.90%)
# Total Accepted:    317.1K
# Total Submissions: 721.7K
# Testcase Example:  '[0,1,0,2,1,0,1,3,2,1,2,1]'
#
# Given n non-negative integers representing an elevation map where the width
# of each bar is 1, compute how much water it is able to trap after raining.
#
#
# The above elevation map is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In
# this case, 6 units of rain water (blue section) are being trapped. Thanks
# Marcos for contributing this image!
#
# Example:
#
#
# Input: [0,1,0,2,1,0,1,3,2,1,2,1]
# Output: 6
#
#
class Solution:
    def trap(self, height: List[int]) -> int:
        if len(height) == 0:
            return 0
        max_height = 0
        contain = [0 for i in range(len(height))]
        for i in range(len(height)):
            max_height = max(height[i], max_height)
            contain[i] = max_height
        max_height = 0
        res = 0
        for i in range(len(height) - 1, -1, -1):
            max_height = max(height[i], max_height)
            contain[i] = min(max_height, contain[i])
            if contain[i] > height[i]:
                res += contain[i] - height[i]
        return res
'''
动态规划，指针对撞，经典题目，container表示当前位置的最大吃水容量，container[i] = min(左侧最大吃水，右侧最大吃水)
'''
