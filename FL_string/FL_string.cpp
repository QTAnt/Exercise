//找出字符串中第一个只出现一次的字符
//
//输入描述:
//输入一个非空字符串
//输出描述 :
//输出第一个只出现一次的字符，如果不存在输出 - 1
//示例1
//输入
//复制
//asdfasdfo
//输出
//复制
//o
//https://www.nowcoder.com/practice/e896d0f82f1246a3aa7b232ce38029d4?tpId=37&&tqId=21282&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int count = 0;
//		size_t sz = s.size();
//
//		if (s.size() == 0)
//			cout << "-1" << endl;
//		string::iterator it = s.begin();
//		bool flag = false;
//
//		while (it != s.end())
//		{
//			count = 0;
//			for (int i = 0; i < sz; ++i)
//			{
//				if (*it == s[i])
//					count++;
//			}
//
//			if (count == 1)
//			{
//				flag = true;   //如果进入该循环，则标记一下
//				break;
//			}
//			else
//				it++;
//		}
//
//		if (flag)              //执行刚才标记的语句
//		{
//			cout << *it << endl;
//		}
//
//		else
//		{
//			cout << "-1" << endl;
//		}
//
//	}
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

int firstUniqChar(string s) {
	int count[26] = { 0 };
	for (int i = 0; i < s.size(); i++)
	{
		count[s[i] - 'a'] ++;         //遍历字符串，记录出现字符的次数
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (1 == count[s[i] - 'a']){   //如果字符出现次数为1，则返回该位置i;否则返回-1
			return i;
		}

	}
	return -1;
}
int main()
{
	string str;
	while (cin >> str)
	{
		int re = firstUniqChar(str);
		if (re == -1)
		{
			cout << re << endl;
		}
		else
			cout << str[re] << endl;
	}
	return 0;
}