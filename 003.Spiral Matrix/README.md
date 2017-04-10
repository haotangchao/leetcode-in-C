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
  设置四个变量，left, right, top, bottom，每转一圈就往内缩小，以自动检测是否循环至最内圈。最后依旧是边界问题，即只留下一行和只留下一列的情况，
分left == right 和 top == bottom 的情况讨论。
