//[Delete_public_characters:ɾ�������ַ�](https://www.nowcoder.com/cts/16710229/summary?id=3A7399510717A8FD#4/{%22uid%22%3A%223A7399510717A8FD%22%2C%22type%22%3A%224%22%2C%22index%22%3A1})
//��Ŀ����
//���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ������磬����"They are students."�͡�aeiou"����ɾ��֮��ĵ�һ���ַ������"Thyr stdnts.��
//����������
//ÿ�������������2���ַ���
//���������
//���ɾ������ַ���

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	//����һ�����飬�����е��ַ���ʼ��Ϊ0��Ȼ������ڶ����ַ����������ֵ��ַ���Ӧ��λ����Ϊ1
	int a[256] = { 0 };
	for (size_t i = 0; i<s2.size(); ++i)
	{
		a[s2[i]] = 1;
	}
	string cur;     //����һ��cur��������յĽ��
	//������һ���ַ��������ֵ��ַ���Ӧ��λ����0���ַ�--��ʾ��һ���ַ���û����ڶ����ַ������ظ����ַ���
	//�����������Ϊ1�Ĳ��뵽cur��
	for (size_t i = 0; i<s1.size(); ++i)
	{
		if (a[s1[i]] == 0)
			cur += s1[i];
	}
	cout << cur << endl;
	return 0;
}
