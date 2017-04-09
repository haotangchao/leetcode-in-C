# 题目：（Array, Easy）
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0

## 算法：二分法查找，不断将待插入数与array[(low+high)/2]进行比较大小。主要是边界问题，但这里边界最终是统一的。
