# 题目：
Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

Example:
Given num = 16, return true. Given num = 5, return false.

Follow up: Could you solve it without loops/recursion?

# 算法思路：
  用一些位操作，如(num & (num - 1)) == 0 判断是否是2的n次方。和 (num - 1) % 3 == 0再进一步判断是否是4的n次方。
