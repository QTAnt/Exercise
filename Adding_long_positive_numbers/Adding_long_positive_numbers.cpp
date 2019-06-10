//Adding_long_positive_numbers：超长正数相加
//https ://www.nowcoder.com/practice/5821836e0ec140c1aa29510fd05f45fc?tpId
//题目描述
//请设计一个算法完成两个超长正整数的加法。
//
//接口说明
//
///*
//请设计一个算法完成两个超长正整数的加法。
//输入参数：
//String addend：加数
//String augend：被加数
//返回值：加法结果
//*/
//
//public String AddLongInteger(String addend, String augend)
//{
//	/*在这里实现功能*/
//
//
//	return null;
//}
//
//输入描述:
//输入两个字符串数字
//输出描述 :
//输出相加后的结果，string型
//示例1
//输入
//复制
//99999999999999999999999999999999999999999999999999
//1
//输出
//复制
//100000000000000000000000000000000000000000000000000

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string AddLongInteger(string s1, string s2)
{
	//从低位向高位相加
	int m = s1.size() - 1;   //s1的最后一位
	int n = s2.size() - 1;   //s2的最后一位
	string result = "";      //接收最终结果

	//当前位的相加结果
	int cur = 0;

	while (m >= 0 || n >= 0)
	{
		if (m >= 0)
		{
			cur += s1[m] - '0';
		}
		if (n >= 0)
		{
			cur += s2[n] - '0';
		}

		//当前位的最大值不大于10
		result += (char)(cur % 10 + '0');
		//最大值大于10，向上进一位
		cur /= 10;
		m--;
		n--;
	}
	
	//相加完之后，如果还有进位，则在加1
	if (cur == 1)
	{
		result += '1';
	}
	//整体逆置
	reverse(result.begin(), result.end());
	return result;
}

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		cout << AddLongInteger(s1, s2) << endl;
	}
	return 0;
}