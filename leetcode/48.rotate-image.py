#
# @lc app=leetcode id=48 lang=python3
#
# [48] Rotate Image
#
# https://leetcode.com/problems/rotate-image/description/
#
# algorithms
# Medium (49.39%)
# Total Accepted:    268.7K
# Total Submissions: 542.5K
# Testcase Example:  '[[1,2,3],[4,5,6],[7,8,9]]'
#
# You are given an n x n 2D matrix representing an image.
#
# Rotate the image by 90 degrees (clockwise).
#
# Note:
#
# You have to rotate the image in-place, which means you have to modify the
# input 2D matrix directly. DO NOT allocate another 2D matrix and do the
# rotation.
#
# Example 1:
#
#
# Given input matrix =
# [
# ⁠ [1,2,3],
# ⁠ [4,5,6],
# ⁠ [7,8,9]
# ],
#
# rotate the input matrix in-place such that it becomes:
# [
# ⁠ [7,4,1],
# ⁠ [8,5,2],
# ⁠ [9,6,3]
# ]
#
#
# Example 2:
#
#
# Given input matrix =
# [
# ⁠ [ 5, 1, 9,11],
# ⁠ [ 2, 4, 8,10],
# ⁠ [13, 3, 6, 7],
# ⁠ [15,14,12,16]
# ],
#
# rotate the input matrix in-place such that it becomes:
# [
# ⁠ [15,13, 2, 5],
# ⁠ [14, 3, 4, 1],
# ⁠ [12, 6, 8, 9],
# ⁠ [16, 7,10,11]
# ]
#
#
#
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        def swap(matrix, x, y, x1, y1):
            matrix[x][y] = matrix[x][y] ^ matrix[x1][y1]
            matrix[x1][y1] = matrix[x][y] ^ matrix[x1][y1]
            matrix[x][y] = matrix[x][y] ^ matrix[x1][y1]

        n = len(matrix)
        count = (n * n) // 4
        xi = 0
        yi = 0
        flag = 0
        for i in range(count):
            if flag >= (n - 1) - 2 * xi:
                xi += 1
                flag = 0
            yi = xi + flag
            flag += 1
            x, y = xi, yi
            for _ in range(3):
                x1, y1 = n - 1 - y, x
                swap(matrix, x, y, x1, y1)
                x, y = x1, y1
# 参考：https://www.jianshu.com/p/47435d902635
# 主要的两个难点是：1.如何顺时针交换，这里的规律是俩俩逆时针替换; 2. 找出总共要交换的对数


