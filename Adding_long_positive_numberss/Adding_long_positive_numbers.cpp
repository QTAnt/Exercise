//Adding_long_positive_numbers�������������
//https ://www.nowcoder.com/practice/5821836e0ec140c1aa29510fd05f45fc?tpId
//��Ŀ����
//�����һ���㷨������������������ļӷ���
//
//�ӿ�˵��
//
///*
//�����һ���㷨������������������ļӷ���
//���������
//String addend������
//String augend��������
//����ֵ���ӷ����
//*/
//
//public String AddLongInteger(String addend, String augend)
//{
//	/*������ʵ�ֹ���*/
//
//
//	return null;
//}
//
//��������:
//���������ַ�������
//������� :
//�����Ӻ�Ľ����string��
//ʾ��1
//����
//����
//99999999999999999999999999999999999999999999999999
//1
//���
//����
//100000000000000000000000000000000000000000000000000

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string AddLongInteger(string s1, string s2)
{
	//�ӵ�λ���λ���
	int m = s1.size() - 1;   //s1�����һλ
	int n = s2.size() - 1;   //s2�����һλ
	string result = "";      //�������ս��

	//��ǰλ����ӽ��
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

		//��ǰλ�����ֵ������10
		result += (char)(cur % 10 + '0');
		//���ֵ����10�����Ͻ�һλ
		cur /= 10;
		m--;
		n--;
	}
	
	//�����֮��������н�λ�����ڼ�1
	if (cur == 1)
	{
		result += '1';
	}
	//��������
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