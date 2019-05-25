Binary_conversion：进制转换
//[Binary_conversion:进制转换](https://www.nowcoder.com/practice/ac61207721a34b74b06597fe6eb67c52?tpId=85&&tqId=29862&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking)
//·题目描述
//给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数
//输入描述：
//输入为一行，M（32位整数）、N（2≤N≤16），以空格隔开。
//输出描述：
//为每个测试实例输出转换后的数，每个输出占一行。如果N大于9，则对应的数字规则参考16进制（比如，10用A表示，等等）
//示例1输入输出示例仅供调试，后台判题数据一般不包含示例72输出复制]
//111

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S = "", s = "0123456789ABCDEF";
	int M, N;
	cin >> M >> N;
	while (M)
	{
		if (M < 0)
		{
			M = -M;
			cout << "-";
		}
		S = s[M%N] + S;
		M /= N;
	}
	cout << S << endl;
	return 0;
}
