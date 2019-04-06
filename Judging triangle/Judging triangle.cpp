//链接：https://www.nowcoder.com/questionTerminal/c67a09062c0f4a5b964eef0945d3dd06
//给定三条边，请你判断一下能不能组成一个三角形。
//输入描述 :
//输入包含多组数据，每组数据包含三个正整数a、b、c（1≤a, b, c≤10 ^ 100）。
//输出描述 :
//对应每一组数据，如果它们能组成一个三角形，则输出“Yes”；否则，输出“No”。
//示例1
//输入
//1 2 3
//2 2 2
//输出
//No
//Yes

#include <iostream>
#include"cmath"
using namespace std;

//*************************************************************************************
//一个C语言的代码
//#include<stdio.h>
//int main()
//{
//	int t;
//	scanf_s("%d", &t);
//	while (t--)
//	{
//		double x, y, z;
//		scanf_s("%lf%lf%lf", &x, &y, &z);
//
//		if ((x + y)>z && (x + z)>y && (y + z)>x)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

//*************************************************************************************
//下面这个代码，无法输出，好奇怪哦,原来是"Yes""No"全部大写了 测试用例通过了90.91%
// https://www.nowcoder.com/questionTerminal/c67a09062c0f4a5b964eef0945d3dd06

#include <iostream>
#include"cmath"
using namespace std;

int main()
{
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		if ((a + b) > c && (a + c) > b && (b + c) > a && (abs(a - b)) < c && (abs(a - c)) < b && (abs(b - c)) < a)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}


//*************************************************************************************
//找了个别人的，啊啊啊啊啊，好长，不想看(通过100%)
//#include <iostream>
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//
//using namespace std;
//
//bool fuck(char a[102], char b[102], char c[102])
//{
//	int x[102] = { 0 }, y[102] = { 0 }, i, j, tem, k = 0;
//	for (i = strlen(a) - 1; i >= 0; i--) x[strlen(a) - 1 - i] = a[i] - '0';
//	for (i = strlen(b) - 1; i >= 0; i--)
//	{
//		tem = x[strlen(b) - 1 - i];
//		x[strlen(b) - 1 - i] = (b[i] - '0' + tem + k) % 10;
//		k = (b[i] - '0' + tem + k) / 10;
//	}
//	for (i = strlen(b); i<102; i++)
//	{
//		tem = x[i];
//		x[i] = (tem + k) % 10;
//		k = (tem + k) / 10;
//	}
//	for (i = strlen(c) - 1; i >= 0; i--) y[strlen(c) - 1 - i] = c[i] - '0';
//	for (i = 101; i >= 0; i--) if (x[i]) break;
//	for (j = 101; j >= 0; j--) if (y[j]) break;
//	if (i>j) return true; if (i<j) return false;
//	for (; i >= 0; i--)
//	{
//		if (x[i]<y[i]) return false;
//		if (x[i]>y[i]) return true;
//	}
//	return false;
//}
//int main()
//{
//	char a[102], b[102], c[102];
//	while (cin >> a >> b >> c)
//	{
//		if (fuck(a, b, c) && fuck(a, c, b) && fuck(b, c, a)) cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//	return 0;
//}
//*************************************************************************************
