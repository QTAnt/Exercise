//求n维数组的最大子数组
//时间限制：C / C++语言 1000MS；其他语言 3000MS
//内存限制：C / C++语言 65536KB；其他语言 589824KB
//题目描述：
//设有n维数组，元素分别为a00  a01 ... a0(n - 1) a10 a11 ... a1(n - 1) ... ... a(n - 1)0 a(n - 1)1 ... a(n - 1)(n - 1)，求其相加和最大子数组的值max
//输入
//n
//a00  a01 ... a0(n - 1) a10 a11 ... a1(n - 1) ... ... a(n - 1)0 a(n - 1)1 ... a(n - 1)(n - 1)
//（数据范围：n在1到100之间，每个数在 - 128到127之间）
//输出
//max
//样例输入
//2
//- 1 2 - 3 6
//样例输出
//8

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> vec(n, vector<int>(n,0));
	for (int i = 0; i < n;i++){
		for (int j = 0; j < n; j++){
			cin >> vec[i][j];
		}
		long MAX = 0;
		long ret = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				ret += vec[i][j];
				if (MAX < ret)
					MAX = ret;
				if (ret < 0)
					ret = 0;
			}
		}
		cout << MAX << endl;
	}
	system("pause");
	return 0;
}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<vector<int>> vec(n, vector<int>(n, 0));
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){
//			cin >> vec[i][j];
//		}
//		long MAX = 0;
//		long ret = 0;
//		for (int i = 0; i < n; i++){
//			for (int j = 0; j < n; j++){
//				ret += vec[i][j];
//				if (MAX < ret)
//					MAX = ret;
//				if (ret < 0)
//					ret = 0;
//			}
//		}
//		cout << MAX << endl;
//		system("pause");
//		return 0;
//	}
//}