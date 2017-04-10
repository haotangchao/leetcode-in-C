# 题目：（Array, Easy)
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
For example,

Consider the following matrix:

[
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
Given target = 3, return true.

# 算法思路：
  这题既然是全部按从小到大排列好的二维数组，则可以把它看成一个一维数组a[m*n]，其中对于a中任意的一个元素a[t]可以转换成相应的matrix[i][j]，
转换的公式为i = t / n, j = t % n，剩下的就与一维数组的二分法一样了，很简单。
