//Number of factors
//链接：https://www.nowcoder.com/questionTerminal/e8fb8f89f5d147ec92fd8ecfefe89b0d
//来源：牛客网
//
//一个正整数可以分解成一个或多个数组的积。例如36 = 2 * 2 * 3 * 3，即包含2和3两个因子。NowCoder最近在研究因子个数的分布规律，现在给出一系列正整数，他希望你开发一个程序输出每个正整数的因子个数。
// write your code here cpp
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int s, n;
	while (cin >> s)
	{
		n = 0;        //计数
		for (int i = 2; i <= sqrt(s); i++)
			if (s%i == 0)
			{
				while (s%i == 0)
					s = s / i;
					n++;
			}
			if (s != 1)
				n++;
		cout << n << endl;
	}
	return 0;
}

