//[The even number of the nearest prime numbers����ӽ���������ɵ�ż��](https://www.nowcoder.com/practice/f8538f9ae3f1484fb137789dec6eedb9?tpId)
//��Ŀ����
//����һ��ż��������2����������2��������ɣ����ż����2�������кܶ������������ĿҪ��������ָ��ż��������������ֵ��С��������
//�������� : ����һ��ż��������� : �����������ʾ��1
//���� 20
//��� 7 13
	   
#include <iostream>
#include <algorithm>
	   using namespace std;

//�ж�����
bool IsPrime(int n)
{
	int cur = sqrt(n);  //�м�ֵ������
	for (int i = 2; i <= cur; i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;//�������
	int mid; //nƫ�м����
	int j;
	while (cin >> n)
	{
		mid = n / 2;
		//���м���������
		for (j = mid; j > 0; j--)
		{
			if (IsPrime(j) && IsPrime(n - j))
				break;
		}
		cout << j << endl;
		cout << n - j << endl;
	}
	return 0;
}
