#
# @lc app=leetcode id=46 lang=python3
#
# [46] Permutations
#
# https://leetcode.com/problems/permutations/description/
#
# algorithms
# Medium (56.27%)
# Total Accepted:    409.2K
# Total Submissions: 725.3K
# Testcase Example:  '[1,2,3]'
#
# Given a collection of distinct integers, return all possible permutations.
#
# Example:
#
#
# Input: [1,2,3]
# Output:
# [
# ⁠ [1,2,3],
# ⁠ [1,3,2],
# ⁠ [2,1,3],
# ⁠ [2,3,1],
# ⁠ [3,1,2],
# ⁠ [3,2,1]
# ]
#
#
#
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []

        def _permute(index, nums, res):
            if index == len(nums):
                res.append(nums.copy())
                return
            for i in range(index, len(nums)):
                nums[index], nums[i] = nums[i], nums[index]
                _permute(index+1, nums, res)
                nums[index], nums[i] = nums[i], nums[index]
        if len(nums) == 0:
            return [[]]
        _permute(0, nums, res)
        return res

