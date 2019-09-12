//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N, int x, int y;
//	cin >> N >> x >> y;
//	vector<int> v(n, 0);
//	for (int i = 0; i < N; i++)
//		cin >> v[i];
//	int Sum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		int ret = 0;
//		int cur = i;
//		if (v[i] == 0)
//		{
//			while (v[cur] == 0 && N > cur)
//			{
//				cur++;
//			}
//			ret = cur - 1;
//			Sum += min(x, y);
//		}
//		i = cur;
//	}
//	cout << Sum << endl;
//}

//桌子上放着N枚硬币，将其从1到N编号，初始时有的正面朝上，有的反面朝上。现在要将所有硬币翻至正面朝上，每次可以选择一个区间[L，R]（1≤L≤R≤N），并执行以下两种操作中的一种：
//①将编号为L到R的硬币翻面；
//②若编号为L到R的硬币均反面朝上，则将其翻至正面朝上。
//其中操作①所需的代价为x，操作②所需的代价为y，那么将所有硬币翻至正面朝上所需的总代价最小是多少？
//输入
//第一行包含三个整数N、x和y，1≤N≤105，1≤x，y≤10。
//第二行包含N个空格隔开的整数t1到tN，0≤ti≤1。若ti = 0，则表示i号硬币初始时反面朝上；若ti = 1，则表示i号硬币初始时正面朝上。
//输出
//输出总代价的最小值。
//样例输入
//3 1 2
//0 1 0
//样例输出
//2
//提示
//第一次选择区间[1，3]并执行操作①，第二次选择区间[2，2]并同样执行操作①。

//聪聪的码：
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Min(vector<int>& v, int N, int x, int y)
{
	int Sum = 0;
	for (int i = 0; i < N; i++)
	{
		int num = 0;
		int cur = i;
		if (v[i] == 0)
		{
			while (v[cur] == 0 && N > cur)
			{
				cur++;
			}
			num = cur - i;
			Sum += min(x, y);
		}
		i = cur;
	}
	return Sum;
}

int main()
{
	int N, x, y;
	cin >> N >> x >> y;
	vector<int> v(N, 0);
	for (int i = 0; i < N; i++)
		cin >> v[i];
	int tmp = Min(v, N, x, y);
	cout << tmp << endl;
	return 0;
}

//星星源码：
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int MinEngery(vector<int>& v, int n, int x, int y)
//{
//	int engery = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int end = i;
//		if (v[i] == 0)
//		{
//			while (end < n && v[end] == 0)
//			{
//				end++;
//			}
//			engery += min(x, y);
//		}
//		i = end;
//	}
//	return engery;
//}
//
//int main()
//{
//	int n, x, y;
//	cin >> n >> x >> y;
//	vector<int> v(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//	int ret = MinEngery(v, n, x, y);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}

//首先给出n个数字a1, a2, ….an，然后给你m个回合，每回合你可以从中选择一个数取走它，剩下来的每个数字ai都要减去一个值bi。如此重复m个回合，所有你拿走的数字之和就是你所得到的分数。
//现在给定你a序列和b序列，请你求出最多可以得到多少分。
//输入
//输入第一行，仅包含一个整数n（1 <= n <= 100），表示数字的个数。
//第二行，一个整数m（1 <= m <= n），表示回合数。
//接下来一行有n个不超过10000的正整数，分别为a1, a2…an.
//最后一行有n个不超过500的正整数，分别为b1, b2….bn.
//输出
//输出仅包含一个正整数，即最多可以得到的分数
//样例输入
//5
//5
//10 20 30 40 50
//4 5 6 7 8
//样例输出
//100