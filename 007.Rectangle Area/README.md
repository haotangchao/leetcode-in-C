# 题目：（Math，Medium）
Find the total area covered by two rectilinear rectangles in a 2D plane.

Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.

Rectangle Area
Assume that the total area is never beyond the maximum possible value of int.

# 算法思路：
  这个题曾经在地理信息系统原理与应用的课还是计算机图形学的课上老师讲过。当时的解法就是这题解答区最高票的思路：不管是否重叠，直接用Max和Min函数找到
重叠区域，然后减掉这块区域的面积。之后就简单了
