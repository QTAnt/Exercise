//[��ȫ����Perfect number�����ֳ����������걸������һЩ�������Ȼ����](https://www.nowcoder.com/practice/7299c12e6abb437c87ad3e712383ff84?tpId=37&&tqId=21279&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking)
//
//�����е������ӣ����������������Լ�����ĺͣ������Ӻ�������ǡ�õ���������
//���磺28������Լ��1��2��4��7��14��28����ȥ������28�⣬����5������ӣ�1 + 2 + 4 + 7 + 14 = 28��
//��������count(int n), ���ڼ���n����(��n)��ȫ���ĸ��������㷶Χ, 0 < n <= 500000
//����n������ȫ���ĸ����� �쳣������� - 1

//��һ
#include <iostream>
#include <algorithm>

using namespace std;

int count(int n)
{
	int m = 0;
	if ((n < 0) | (n>500000))
		return -1;
	else
	{
		for (int i = 2; i <= n; i++)

		{
			int sum = 0;

			//������Χ
			int range = sqrt(i);
			for (int j = 2; j <= range; j++)
			{
				if (i%j == 0)
				{
					//���j^2 = i��˵������Լ����ͬ��ֻ��һ��
					if (i / j == j)
						sum += j;

					else
						//����������ͬ��Լ����Ҫ���
						sum += j + (i / j);
				}
			}

			if (sum + 1 == i)
				m++;
		}
		return m;
	}
}

int main()
{
	int input;
	while (cin >> input)
		cout << count(input) << endl;

	return 0;
}

//����

#include <iostream>
using namespace std;

int count(int n)
{
	int count = 0;
	if (n<0 | n>500000)
	{
		return -1;
	}
	else
	{
		for (int i = 2; i <= n; ++i)
		{
			int sum = 0;
			for (int j = 2; j < i; ++j)
			{
				if ((i%j) == 0)
				{
					sum += i / j;
				}
			}
			if ((sum + 1) == i)
				count++;
		}
		return count;
	}
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << count(n) << endl;
	}
	system("pause");
	return 0;
}

