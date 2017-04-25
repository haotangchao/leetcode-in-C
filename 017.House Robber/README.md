# 题目：（Dynamic Programming，Easy）
  You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, 
the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it 
will automatically contact the police if two adjacent houses were broken into on the same night.

  Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money 
you can rob tonight without alerting the police.

# 算法分析：
  这是一道动态规划题，抢家劫舍实际上是求数组中不相邻数值组合的最大值。如给出以下的数组：
  {3, 2, 1, 6, 7, 9, 2, 3, 4};
  则第一二个无疑问，第一个为n[0]，第二个为max(n[0], n[1])，第三个则出现了选择，应该为max(n[2] + n[0], n[1])，则递推公式就出来了，
就是max(n[i] + n[i - 2], n[i - 1])。那就使用三个暂时变量就可以了。 
