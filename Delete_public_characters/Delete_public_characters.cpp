//[Delete_public_characters:删除公共字符](https://www.nowcoder.com/cts/16710229/summary?id=3A7399510717A8FD#4/{%22uid%22%3A%223A7399510717A8FD%22%2C%22type%22%3A%224%22%2C%22index%22%3A1})
//题目描述
//输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。例如，输入"They are students."和“aeiou"，则删除之后的第一个字符串变成"Thyr stdnts.”
//输入描述：
//每个测试输入包含2个字符串
//输出描述：
//输出删除后的字符串

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	//定义一个数组，将所有的字符初始化为0，然后遍历第二个字符串，将出现的字符对应的位置置为1
	int a[256] = { 0 };
	for (size_t i = 0; i<s2.size(); ++i)
	{
		a[s2[i]] = 1;
	}
	string cur;     //定义一个cur，存放最终的结果
	//遍历第一个字符串（出现的字符对应的位置是0的字符--表示第一个字符串没有与第二个字符串里重复的字符）
	//逐个遍历，记为1的插入到cur里
	for (size_t i = 0; i<s1.size(); ++i)
	{
		if (a[s1[i]] == 0)
			cur += s1[i];
	}
	cout << cur << endl;
	return 0;
}
