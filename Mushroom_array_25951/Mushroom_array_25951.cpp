//Mushroom_array_25951��Ģ����
//https ://www.nowcoder.com/questionTerminal/ed9bc679ea1248f9a3d86d0a55c0be10
///
//*Ҫʹ
//�ö�̬�滮
//* /
#include<iostream>
#include <iomanip>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n, m, k;
	while (cin >> n >> m >> k){
		vector<vector<int> > table((n + 1), vector<int>(m + 1));//��¼Ģ��
		vector<vector<double> > P((n + 1), vector<double>(m + 1));//P[i][j]��ʾ������Ģ���ߵ�i��j�ĸ���
			int x, y;
		for (int i = 0; i < k; i++){
			cin >> x >> y;
			table[x][y] = 1;
		} P
			[1][1] = 1.0; //������Ϊ1
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++)
			{
				if (!(i == 1 && j == 1)){ //�������
					P[i][j] = P[i - 1][j] * (j == m ? 1 : 0.5) + P[i][j - 1] * (i == n ? 1 : 0.5); //�߽��ʱ�򣬸���Ϊ1
					if (table[i][j] == 1) P[i][j] = 0; //����õ���Ģ����������Ϊ0
				}
			}
		} 
			cout << fixed << setprecision(2) << P[n][m] << endl;
	}
}