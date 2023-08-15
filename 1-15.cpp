//15. 下面是根据欧几里得算法编写的函数，它所计算的是a 和 b 的（ ）。
int euclid(int a, int b)
{
   if (b == 0)
      return a;
   else
      return euclid(b, a % b);
}
//非运行文件，如需运行测试，请自行编写其他部分
/*
    A.最大公共质因子
    B.最小公共质因子
    C.最大公约数
    D.最小公倍数
参考答案：C
*/