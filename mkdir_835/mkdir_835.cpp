//mkdir_835
//https ://www.nowcoder.com/questionTerminal/433c0c6a1e604a4795291d9cd7a60c7a
//[题目解析]
//1. 该题目需要你了解 mkdir - p 命令，改命令可以递归创建目录
//2. 但是该题目其实想让我们解决的问题是，给你一组数据（详情见题目），怎么用最少的 mkdir - p 创建
//出我们想要的多个目录
//[解题思路]
//只要按照题面，将前缀字符串路径和相同路径剔除，只mkdir －p最长或者唯一路径就可以解决这个问题

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<string> list(n);
		vector<bool> flag(n, true);
		for (int i = 0; i < n; ++i) cin >> list[i];
		sort(list.begin(), list.end()); //将类似字符串经过排序，放在一起
		for (int i = 0; i < list.size() - 1; ++i)
		{
			// 1、两串相同
			// 2、前串是后串的子串，而且后串后一位是 '/'
			if (list[i] == list[i + 1]) flag[i] = false;
			else if (list[i].size() < list[i + 1].size() && \
				list[i] == list[i + 1].substr(0, list[i].size()) && list[i + 1]
				[list[i].size()] == '/')
				flag[i] = false;
		} 
			for(int i = 0; i < list.size(); ++i)
		if (flag[i]) cout << "mkdir -p " << list[i] << endl;
		cout << endl;
	} 
		return 0;
}