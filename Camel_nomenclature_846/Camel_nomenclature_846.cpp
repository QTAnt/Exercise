//Camel_nomenclature_846������������
//����Ŀ��������
//��Ŀ�����ȽϺ����, ��ϸ���⼴��.
//������˼·����
//����һ���ַ�һ���ַ��Ķ�ȡ����
//1. ���� _ ��ֱ������
//2. �����һ���ַ��� _ ����һ���ַ�ת��д��ĸ

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
			// 1. ���� _ ��ֱ������
			if (s[i] == '_') continue;
			// 2. �����һ���ַ��� _ ����һ���ַ�תΪ��д��ĸ
			if (i > 0 && s[i - 1] == '_') cout << (char)toupper(s[i]);
			else cout << s[i];
		}
		cout << endl;
	} 
	return 0;
}
