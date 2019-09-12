//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N, int x, int y;
//	cin >> N >> x >> y;
//	vector<int> v(n, 0);
//	for (int i = 0; i < N; i++)
//		cin >> v[i];
//	int Sum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		int ret = 0;
//		int cur = i;
//		if (v[i] == 0)
//		{
//			while (v[cur] == 0 && N > cur)
//			{
//				cur++;
//			}
//			ret = cur - 1;
//			Sum += min(x, y);
//		}
//		i = cur;
//	}
//	cout << Sum << endl;
//}

//�����Ϸ���NöӲ�ң������1��N��ţ���ʼʱ�е����泯�ϣ��еķ��泯�ϡ�����Ҫ������Ӳ�ҷ������泯�ϣ�ÿ�ο���ѡ��һ������[L��R]��1��L��R��N������ִ���������ֲ����е�һ�֣�
//�ٽ����ΪL��R��Ӳ�ҷ��棻
//�������ΪL��R��Ӳ�Ҿ����泯�ϣ����䷭�����泯�ϡ�
//���в���������Ĵ���Ϊx������������Ĵ���Ϊy����ô������Ӳ�ҷ������泯��������ܴ�����С�Ƕ��٣�
//����
//��һ�а�����������N��x��y��1��N��105��1��x��y��10��
//�ڶ��а���N���ո����������t1��tN��0��ti��1����ti = 0�����ʾi��Ӳ�ҳ�ʼʱ���泯�ϣ���ti = 1�����ʾi��Ӳ�ҳ�ʼʱ���泯�ϡ�
//���
//����ܴ��۵���Сֵ��
//��������
//3 1 2
//0 1 0
//�������
//2
//��ʾ
//��һ��ѡ������[1��3]��ִ�в����٣��ڶ���ѡ������[2��2]��ͬ��ִ�в����١�

//�ϴϵ��룺
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Min(vector<int>& v, int N, int x, int y)
{
	int Sum = 0;
	for (int i = 0; i < N; i++)
	{
		int num = 0;
		int cur = i;
		if (v[i] == 0)
		{
			while (v[cur] == 0 && N > cur)
			{
				cur++;
			}
			num = cur - i;
			Sum += min(x, y);
		}
		i = cur;
	}
	return Sum;
}

int main()
{
	int N, x, y;
	cin >> N >> x >> y;
	vector<int> v(N, 0);
	for (int i = 0; i < N; i++)
		cin >> v[i];
	int tmp = Min(v, N, x, y);
	cout << tmp << endl;
	return 0;
}

//����Դ�룺
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int MinEngery(vector<int>& v, int n, int x, int y)
//{
//	int engery = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int end = i;
//		if (v[i] == 0)
//		{
//			while (end < n && v[end] == 0)
//			{
//				end++;
//			}
//			engery += min(x, y);
//		}
//		i = end;
//	}
//	return engery;
//}
//
//int main()
//{
//	int n, x, y;
//	cin >> n >> x >> y;
//	vector<int> v(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//	int ret = MinEngery(v, n, x, y);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}

//���ȸ���n������a1, a2, ��.an��Ȼ�����m���غϣ�ÿ�غ�����Դ���ѡ��һ����ȡ������ʣ������ÿ������ai��Ҫ��ȥһ��ֵbi������ظ�m���غϣ����������ߵ�����֮�;��������õ��ķ�����
//���ڸ�����a���к�b���У�������������Եõ����ٷ֡�
//����
//�����һ�У�������һ������n��1 <= n <= 100������ʾ���ֵĸ�����
//�ڶ��У�һ������m��1 <= m <= n������ʾ�غ�����
//������һ����n��������10000�����������ֱ�Ϊa1, a2��an.
//���һ����n��������500�����������ֱ�Ϊb1, b2��.bn.
//���
//���������һ�����������������Եõ��ķ���
//��������
//5
//5
//10 20 30 40 50
//4 5 6 7 8
//�������
//100