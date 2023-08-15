/*
2. （二叉查找树） 二叉查找树具有如下性质： 
    每个节点的值都大于其左子树上所有节点的 值、小于其右子树上所有节点的值。
    试判断一棵树是否为二叉查找树。
    输入的第一行包含一个整数 n，
    表示这棵树有 n 个顶点， 
    编号分别为 1, 2, ⋯ , n，
    其 中编号为 1 的为根结点。
    之后的第 i 行有三个数 value, left_child , 
    right_child ，分别表示该节点关键字的值、
    左子节点的编号、右子节点的编号；
    如果不存在左子节点或右子节点，则用 0 代替。
    输出 1 表示这棵树是二叉查找树，输出0 则表示不是。
*/
#include <iostream> 
using namespace std; 
const int SIZE = 100;
const int INFINITE = 1000000;
struct node
{
	int left_child, right_child, value;
}; node a[SIZE];
int is_bst( int root, int lower_bound, int upper_bound )
{
	int cur;
	if ( root == 0 )
		return(1);
	cur = a[root].value;
	if ( (cur > lower_bound) && ( /*1->*/cur<upper_bound/*<-1*/ ) && (is_bst( a[root].left_child, lower_bound, cur ) == 1) && (is_bst( /*2->*/a[root].right_child/*<-2*/, /*3->*/cur/*<-3*/, /*4->*/upper_bound/*<-4*/ ) == 1) )
		return(1);
	return(0);
}
int main()
{
	int i, n; cin >> n;
	for ( i = 1; i <= n; i++ )
		cin >> a[i].value >> a[i].left_child >> a[i].right_child;
	cout << is_bst( /*5->*/1/*<-5*/, -INFINITE, INFINITE ) << endl;
	return(0);
}
/*
参考答案：
cur<upper_bound
a[root].right_child
cur
upper_bound
1
*/