Binary_conversion������ת��
//[Binary_conversion:����ת��](https://www.nowcoder.com/practice/ac61207721a34b74b06597fe6eb67c52?tpId=85&&tqId=29862&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking)
//����Ŀ����
//����һ��ʮ������M���Լ���Ҫת���Ľ�����N����ʮ������Mת��ΪN������
//����������
//����Ϊһ�У�M��32λ��������N��2��N��16�����Կո������
//���������
//Ϊÿ������ʵ�����ת���������ÿ�����ռһ�С����N����9�����Ӧ�����ֹ���ο�16���ƣ����磬10��A��ʾ���ȵȣ�
//ʾ��1�������ʾ���������ԣ���̨��������һ�㲻����ʾ��72�������]
//111

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S = "", s = "0123456789ABCDEF";
	int M, N;
	cin >> M >> N;
	while (M)
	{
		if (M < 0)
		{
			M = -M;
			cout << "-";
		}
		S = s[M%N] + S;
		M /= N;
	}
	cout << S << endl;
	return 0;
}
