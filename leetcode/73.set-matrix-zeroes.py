#
# @lc app=leetcode id=73 lang=python3
#
# [73] Set Matrix Zeroes
#
# https://leetcode.com/problems/set-matrix-zeroes/description/
#
# algorithms
# Medium (40.36%)
# Total Accepted:    222.6K
# Total Submissions: 551.2K
# Testcase Example:  '[[1,1,1],[1,0,1],[1,1,1]]'
#
# Given a m x n matrix, if an element is 0, set its entire row and column to 0.
# Do it in-place.
#
# Example 1:
#
#
# Input:
# [
# [1,1,1],
# [1,0,1],
# [1,1,1]
# ]
# Output:
# [
# [1,0,1],
# [0,0,0],
# [1,0,1]
# ]
#
#
# Example 2:
#
#
# Input:
# [
# [0,1,2,0],
# [3,4,5,2],
# [1,3,1,5]
# ]
# Output:
# [
# [0,0,0,0],
# [0,4,5,0],
# [0,3,1,0]
# ]
#
#
# Follow up:
#
#
# A straight forward solution using O(mn) space is probably a bad idea.
# A simple improvement uses O(m + n) space, but still not the best
# solution.
# Could you devise a constant space solution?
#
#
#
class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        if len(matrix) * len(matrix[0]) == 0:
            return
        r, c = -1, -1
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    r, c = i, j
                    break
            if r != -1:
                break
        if r == -1:
            return
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    matrix[i][c] = 0
                    matrix[r][j] = 0
        for i in range(len(matrix)):
            if matrix[i][c] == 0 and i != r:
                for j in range(len(matrix[0])):
                    matrix[i][j] = 0
        for i in range(len(matrix[0])):
            if matrix[r][i] == 0:
                for j in range(len(matrix)):
                    matrix[j][i] = 0
        for i in range(len(matrix[0])):
            matrix[r][i]= 0
        return

'''
分析：
一个简单的方案使用 O(m + n) 的额外空间:使用r[n],c[m]两个标记数组，分别用来标记存在0的行，和列的情况。
题目要求我们使用常数空间,因此不能开两个额外的数组。但是，我们可以转换一下思路，达到同样的效果：
我们所需的是两个大小分别为n和m的标记数组，而我们拥有的是一个n*m的二维数组。
若存在某一位置（i,j）满足matrix[i][j] == 0,则表示第i行和第j列最后一定会被置为0，那么我们就可以指定matrix中的第i行和第j列为上述所需的‘r[]’数组和‘c[]’数组，使用int 变量 int r, int c 来指定。
然后将其他位置上的‘0’信息，映射到r,c所制定的行列上：
```
if(matrix[i][j] == 0)
{
    matrix[r][j] = 0;
    matrix[i][c] = 0;
}
```
'''
