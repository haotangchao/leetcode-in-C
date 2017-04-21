# 题目：（Dynamic Programming，Easy）
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.

# 算法分析：
  这是一道动态规划题，解决方法是斐波那契数列。
  设想对于第n阶楼梯登上的方法，我们可以取第n-1阶和n-2阶楼梯，分别把其步数方法记作n1和n2，则第n阶楼梯登上的方法有n1+n2种。
因为对于第n-1阶楼梯，你只有唯一的一种方法登上第n阶楼梯，对于第n-2阶楼梯，你虽有两个一步和一个两步两种方法，但其实两个一步这个方法包含在了n1里，
所以也只有唯一的一种方法，所以为n1+n2种。
  剩下的就是一个斐波那契数列的问题了，第一个数字是1，第二个数字是2，第三个数字开始斐波那契。
