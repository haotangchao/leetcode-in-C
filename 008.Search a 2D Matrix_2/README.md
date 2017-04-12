# 题目：（Binary Search/Divide and Conquer，Medium）
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
For example,

Consider the following matrix:

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
Given target = 5, return true.

Given target = 20, return false.

# 算法思路：
    一种非常简洁清晰也快速的思路：从左下角开始的元素（从右上也是同理），与目标数字进行对比，若相等，则直接返回true，若目标比该元素大，则说明目标不会在该列出现，则右移一个单位，
若目标比该元素小，则说明目标不会在该行出现，则上移一个单位。
