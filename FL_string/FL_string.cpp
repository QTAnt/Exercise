//�ҳ��ַ����е�һ��ֻ����һ�ε��ַ�
//
//��������:
//����һ���ǿ��ַ���
//������� :
//�����һ��ֻ����һ�ε��ַ��������������� - 1
//ʾ��1
//����
//����
//asdfasdfo
//���
//����
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
//				flag = true;   //��������ѭ��������һ��
//				break;
//			}
//			else
//				it++;
//		}
//
//		if (flag)              //ִ�иղű�ǵ����
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
		count[s[i] - 'a'] ++;         //�����ַ�������¼�����ַ��Ĵ���
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (1 == count[s[i] - 'a']){   //����ַ����ִ���Ϊ1���򷵻ظ�λ��i;���򷵻�-1
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