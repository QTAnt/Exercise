//[Lucky_bag�����˵Ĵ���](https://www.nowcoder.com/practice/a5190a7c3ec045ce9273beebdfe029ee?tpId)
//��Ŀ����
//һ������������n����ÿ�������涼��һ������(ӵ����ͬ����������������)�����һ�����������˵ĵ��ҽ���������ĺ���ĺʹ���������ĺ���Ļ���
//���磺
//��������������ĺ�����{ 1, 1, 2, 3 }��������Ӿ������˵ģ���Ϊ1 + 1 + 2 + 3 > 1 * 1 * 2 * 3
//������ʵ��Ӵ������Ƴ�һЩ��(�����Ƴ�0��, ���Ǳ��Ƴ���)��Ҫʹ�Ƴ���Ĵ��������˵ġ����������̼���һ������Ի�õĶ����ֲ�ͬ�����˵Ĵ��ӡ�
//�������� :
//��һ������һ��������n(n �� 1000)
//�ڶ���Ϊn����������xi(xi �� 1000)������� : ������Բ��������˵Ĵ�����
//
//ʾ��1
//����3
//1 1 1
//���2

#include <iostream>
#include <algorithm>

using namespace std;

int n, a[1007];
int DFS(int step, int sum, int mul)
{
	int r = 0;
	for (int i = step + 1; i<n; i++)
	{
		int S = sum + a[i];
		int M = mul*a[i];
		if (S > M)
			r += 1 + DFS(i, S, M);
		else if (a[i] == 1)
			r += DFS(i, S, M);
		else
			break;
		while (i<n - 1 && a[i] == a[i + 1])
			i++;
	}
	return r;
}

int main()
{
	cin >> n;
	for (int i = 0; i<n; i++)
		cin >> a[i];
	sort(a, a + n);
	cout << DFS(0, 1, 1) << endl;
	return 0;
}
