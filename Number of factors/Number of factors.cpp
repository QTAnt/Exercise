//Number of factors
//���ӣ�https://www.nowcoder.com/questionTerminal/e8fb8f89f5d147ec92fd8ecfefe89b0d
//��Դ��ţ����
//
//һ�����������Էֽ��һ����������Ļ�������36 = 2 * 2 * 3 * 3��������2��3�������ӡ�NowCoder������о����Ӹ����ķֲ����ɣ����ڸ���һϵ������������ϣ���㿪��һ���������ÿ�������������Ӹ�����
// write your code here cpp
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int s, n;
	while (cin >> s)
	{
		n = 0;        //����
		for (int i = 2; i <= sqrt(s); i++)
			if (s%i == 0)
			{
				while (s%i == 0)
					s = s / i;
					n++;
			}
			if (s != 1)
				n++;
		cout << n << endl;
	}
	return 0;
}

