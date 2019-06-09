//[Yang_Hui_triangle_deformation：杨辉三角形变形](https://www.nowcoder.com/practice/8ef655edf42d4e08b44be4d777edbf43?tpId)
//题目描述            1         1  1  1      1  2  3  2  1   1  3  6  7  6  3  11  4  10 16 19  16 10  4  1以上三角形的数阵，第一行只有一个数1，以下每行的每个数，是恰好是它上面的数，左上角数到右上角的数，3个数之和（如果不存在某个数，认为该数就是0）。求第n行第一个偶数出现的位置。如果没有偶数，则输出 - 1。例如输入3, 则输出2，输入4则输出3。 
//输入n(n  <= 1000000000)
//输入描述 : 输入一个int整数输出描述 : 输出返回的int值示例1
//输入复制4
//输出复制3

#include<iostream>
#include<vector>
using namespace std;
void printYH(int n)
{

	vector<vector<int> >a(n, vector<int>(2 * n - 1, 0));
	a[0][n - 1] = a[n - 1][0] = a[n - 1][2 * n - 2] = 1;
	if (n<2)
	{
		cout << "-1" << endl;
		return;
	}
	for (int i = 1; i<n; ++i)
	for (int j = 1; j<2 * n - 2; ++j)
		a[i][j] = a[i - 1][j] + a[i - 1][j - 1] + a[i - 1][j + 1];
	for (int i = 0; i<2 * n - 1; ++i)
	if (a[n - 1][i] != 0 && (a[n - 1][i] % 2 == 0))
	{
		cout << i + 1 << endl;
		return;
	}
	return;
}
int main()
{
	int n;
	while (cin >> n)
	{
		printYH(n);
	}
	return 0;
}