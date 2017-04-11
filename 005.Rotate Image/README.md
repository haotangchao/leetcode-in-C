# 题目：（Array，Medium）
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Follow up:
Could you do this in-place?

# 算法思路：
  只是顺时针旋转90°，所以可以先转置，再镜像，如图所示
  1 2 3             1 4 7             7 4 1     
  4 5 6    ---->    2 5 8    ---->    8 5 2     
  7 8 9             3 6 9             9 6 3     
  也可以先镜像再转置，如图所示
  1 2 3             7 8 9             7 4 1     
  4 5 6    ---->    4 5 6    ---->    8 5 2     
  7 8 9             1 2 3             9 6 3     
  我采用了第二种方法，因为可以使用memcpy进行二维数组的整行交换，一开始还天真地想只交换每行数组的首地址，后来才意识到这是个危险的行为，改用memcpy。
转置函数比较简单，就不多说了。
  矩阵的操作也可以选择去点乘变换矩阵，那是图形变换比较通用的方法，这里就不再用这种方法了。
