# 题目：（Sort, Medium）
Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note:
You are not suppose to use the library's sort function for this problem.

# 算法思路：
  其实只有3种数的排序，最高票的思路很厉害，把所有的0丢到最左边，所有的2丢到最右边，剩下的1就在中间了。具体实现的时候设置一个low，一个high，
遇到0就丢到array[low]的位置，并将low+1，i+1；遇到2就丢到array[high]的位置，再将high-1，此时因为不知道换过来的是什么数，所以不需要将i+1，
而是继续检查这个数是多少。
