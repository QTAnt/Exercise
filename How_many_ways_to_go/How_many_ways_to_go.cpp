//[How many ways to go ? ：共有多少种走法](https://www.nowcoder.com/practice/e2a22f0305eb4f2f9846e7d644dba09b?tpId)
//请编写一个函数（允许增加子函数），计算n x m的棋盘格子（n为横向的格子数，m为竖向的格子数）沿着各自边缘线从左上角走到右下角，总共有多少种走法，要求不能走回头路，即：只能往右和往下走，不能往左和往上走。

#include <iostream>
using namespace std;

int PSum(int m, int n)
{
	if (m > 1 && n > 1){
		return PSum(m - 1, n) + PSum(m, n - 1);
	}
	else if ((m >= 1) && (n == 1) || (n >= 1) && (m == 1)){
		return m + n;
	}
	else{
		return 0;
	}
}

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		cout << PSum(m, n) << endl;
	}
	return 0;
}

