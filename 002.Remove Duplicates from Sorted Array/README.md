# 题目：（Array, Easy）
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.

# 解题思路：
  本题的要求有两个：一是把数组中重复的数字去掉并形成新的数组，返回不含重复元素的数组；二是不允许分配新的内存，也就是说所有的操作都必须在原始的数组中完成。
  这就需要两个数组下标，一个下标i在增长的过程中检测是否有重复，另一个下标j则记录删除后的数组。而j是不允许超过i的，即不能覆盖原数组。
