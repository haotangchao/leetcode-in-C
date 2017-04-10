# 题目：（Array, Medium)
Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

For example,
Given the following matrix:

[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
You should return [1,2,3,6,9,8,7,4,5].

# 算法思路：
  设置四个变量，left, right, top, bottom，每打一行或一列就将对应的边界减1并判断是否结束，不用考虑最后的边界问题。
