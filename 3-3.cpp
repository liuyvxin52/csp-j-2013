//3.
#include <iostream> 
using namespace std;
int main()
{
    const int SIZE = 100;
    int n, f, i, left, right, middle, a[SIZE];
    cin>>n>>f;
    for (i = 1; i <= n; i++)
        cin>>a[i];
    left = 1;
    right = n; 
    do {
        middle = (left + right) / 2; 
        if (f <= a[middle])
            right = middle;
        else
            left = middle + 1; 
    } while (left < right); 
    cout<<left<<endl;
    return 0;
}
/*
输入：
12 17
2 4 6 9 11 15 17 18 19 20 21 25
输出：_________
参考答案：7
*/