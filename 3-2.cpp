//2.
#include <iostream> 
using namespace std;
int main()
{
    int a, b, u, i, num;
    cin>>a>>b>>u;
    num = 0;
    for (i = a; i <= b; i++)
        if ((i % u) == 0)
            num++;
    cout<<num<<endl;
    return 0;
}
/*
输入： 1 100 15
输出：_________
参考答案：6
*/