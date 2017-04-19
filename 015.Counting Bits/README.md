# 题目：（Bit Manipulation，Medium）
Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example:
For num = 5 you should return [0,1,1,2,1,2].

Follow up:

It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
Space complexity should be O(n).
Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.

# 算法思路：
  这题要求时间复杂度不能为O(n*sizeof(int))，就是说对于每个数字，不能再去设置一个循环对其每一位进行操作。这里有两种方法：
  1. array[i] = array[i>>1] + i&1;
  2. array[i] = array[i&(i-1)] + 1
  对于第一种方法，从位的角度比较好理解，array[i>>1]与array[i]只相差最右边的一位，所以只要判断最后一位是不是1，若是1则第i个数具有的1的数量就是第i/2个数
的1的个数，加上其最后一位（0就不加，1就加）。
  对于第二种方法，i&(i-1)又一次地出现了，它的作用就是返将i的最靠近右边的一个1置0，所以第i个数的1的个数就等于第i&(i-1)个数的1的个数加1.
