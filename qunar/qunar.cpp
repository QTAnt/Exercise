//��nά��������������
//ʱ�����ƣ�C / C++���� 1000MS���������� 3000MS
//�ڴ����ƣ�C / C++���� 65536KB���������� 589824KB
//��Ŀ������
//����nά���飬Ԫ�طֱ�Ϊa00  a01 ... a0(n - 1) a10 a11 ... a1(n - 1) ... ... a(n - 1)0 a(n - 1)1 ... a(n - 1)(n - 1)��������Ӻ�����������ֵmax
//����
//n
//a00  a01 ... a0(n - 1) a10 a11 ... a1(n - 1) ... ... a(n - 1)0 a(n - 1)1 ... a(n - 1)(n - 1)
//�����ݷ�Χ��n��1��100֮�䣬ÿ������ - 128��127֮�䣩
//���
//max
//��������
//2
//- 1 2 - 3 6
//�������
//8

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> vec(n, vector<int>(n,0));
	for (int i = 0; i < n;i++){
		for (int j = 0; j < n; j++){
			cin >> vec[i][j];
		}
		long MAX = 0;
		long ret = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				ret += vec[i][j];
				if (MAX < ret)
					MAX = ret;
				if (ret < 0)
					ret = 0;
			}
		}
		cout << MAX << endl;
	}
	system("pause");
	return 0;
}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<vector<int>> vec(n, vector<int>(n, 0));
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){
//			cin >> vec[i][j];
//		}
//		long MAX = 0;
//		long ret = 0;
//		for (int i = 0; i < n; i++){
//			for (int j = 0; j < n; j++){
//				ret += vec[i][j];
//				if (MAX < ret)
//					MAX = ret;
//				if (ret < 0)
//					ret = 0;
//			}
//		}
//		cout << MAX << endl;
//		system("pause");
//		return 0;
//	}
//}