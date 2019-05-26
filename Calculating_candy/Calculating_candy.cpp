//[Calculating_candy：计算糖果](% 3Ca href = "https://www.nowcoder.com/cts/16754304/summary?id=1DB246492601FF37#4/{%22uid%22%3A%221DB246492601FF37%22%2C%22type%22%3A%224%22%2C%22index%22%3A0}"%3Ehttps://www.nowcoder.com/cts/16754304/summary?id=1DB246492601FF37#4/{%22uid%22%3A%221DB246492601FF37%22%2C%22type%22%3A%224%22%2C%22index%22%3A0}%3C/a%3E)
//■题目描述
//A，B，C三个人是好朋友，每个人手里都有一些糖果，我们不知道他们每个人手上具体有多少个糖果，但是我们知道以下的信息：
//A - B，B - C，A + B，B + C.这四个数值.每个字母代表每个人所拥有的糖果数.现在需要通过这四个数值计算出每个人手里有多少个糖果，即A，B，C。这里保证最多只有一组整数A，B，C满足所有题设条件。
//输入描述：
//输入为一行，一共4个整数，分别为A - B，B - C，A + B，B + c，用空格隔开。范围均在 - 30到30之间（闭区间）。
//输出描述：
//输出为一行，如果存在满足的整数a，B，c则按顺序输出A，B，c，用空格隔开，行末无空格。如果不存在这样的整数，B，c，则输出N。
//示例1输入输出示例仅供调试，后台判题数据一般不包含示例
//输入
//1 - 234

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int A = (a + c) / 2;
	int C = (d - b) / 2;
	int B1 = (b + d) / 2;
	int B2 = (c - a) / 2;
	if (B1 == B2)
		cout << A << " " << B1 << " " << C;
	else
		cout << "No";
	return 0;
}
