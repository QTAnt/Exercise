//Camel_nomenclature_846：骆驼命名法
//【题目解析】：
//题目描述比较好理解, 仔细读题即可.
//【解题思路】：
//首先一个字符一个字符的读取内容
//1. 遇到 _ 就直接跳过
//2. 如果上一个字符是 _ 则下一个字符转大写字母

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <exception>
#include <iomanip>
#include <memory>
#include <sstream>
#define INF 1000000
using namespace std;
int main(int argc, char** argv)
{
	string s;
	while (cin >> s)
	{
		for (int i = 0; i < s.size(); ++i)
		{
			// 1. 遇到 _ 就直接跳过
			if (s[i] == '_') continue;
			// 2. 如果上一个字符是 _ 则下一个字符转为大写字母
			if (i > 0 && s[i - 1] == '_') cout << (char)toupper(s[i]);
			else cout << s[i];
		}
		cout << endl;
	} 
	return 0;
}
