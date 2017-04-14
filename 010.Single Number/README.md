# 题目：（Bit Manipulation，Easy）
Given an array of integers, every element appears twice except for one. Find that single one.

# 算法思路：
  用按位异或就可以使这过程特别简单。按位异或会对两个二进制的整数逐位比较，都为1或都为0则该位返回0，一个为1一个为0则该位返回1，同时，
按位异或满足交换律和结合律，所以一个数组
    int array[11] = {1, 1, 2, 2, 3, 6, 3, 7, 7, 9, 9};
逐个按位异或后会有 1^1^2^2^3^6^3^7^7^9^9 = (1^1)^(2^2)^(3^3)^(7^7)^(9^9)^6 = 0^0^0^0^0^6 = 6，这正好是那个Single Number
