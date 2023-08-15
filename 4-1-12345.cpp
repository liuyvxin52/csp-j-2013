//#include<bits/stdc++.h>
//using namespace std;
/*
1.  完善程序： （序列重排）
    全局数组变量 a 定义如下：
*/
const int SIZE = 100;
int a[SIZE], n;
//int s;
/*
    它记录着一个长度为n 的序列 a[1], a[2], ⋯ , a[n]。
    现在需要一个函数，以整数p (1 <=p <=n) 为参数，实现如下功能：
    将序列a 的前 p个数与后 n –p 个数对调，且不改变这p 个数（或n –p 个数）之间的相对位置。
    例如，长度为 5 的序列 1, 2, 3, 4, 5，当 p = 2 时重排结果为3, 4, 5, 1, 2 。
    有一种朴素的算法可以实现这一需求，其时间复杂度为O( n)、空间复杂度为 O(n)：
*/
void swap1( int p )
{
	int i, j, b[SIZE];
	for ( i = 1; i <= p; i++ )
		b[/*1->*/n-p+i/*<-1*/] = a[i];         
	for ( i = p + 1; i <= n; i++ )
		b[i - p] = /*2->*/a[i]/*<-2*/;   
	for ( i = 1; i <= /*3->*/n/*<-3*/; i++ )
		a[i] = b[i];
}
void swap2( int p )
{
	int i, j, temp;
	for ( i = p + 1; i <= n; i++ )
	{
		temp = a[i];
		for ( j = i; j >= /*4->*/i-p+1/*<-4*/; j-- )
			a[j] = a[j - 1];
		/*5->*/a[i-p]/*<-5*/ = temp;
	}
}
/*
int main()
{
    int bf[SIZE];
    cin >> n >>s;
    for(int i = 1; i <= n ; i++ )
    {
        cin >> a[i];
        bf[i] = a[i];
    }
    swap1( s );
    for(int i = 1; i <= n ; i++ )
    {
        cout << a[i] << " ";
        a[i]=bf[i];
    }
    cout << endl;
    swap2( s );
    for(int i = 1; i <= n; i++ )
    {
        cout << a[i] << " ";
    }
}
*/
/*
    参考答案：
    n-p+i
    a[i]
    n
    i-p+1
    a[i-p]
*/