//Summation�����
//����Ŀ��������
//���ڵݹ�ʵ�� dfs(�����������) ����.����һ���Ƚϵ��͵ı�������
//������˼·����
//��������Ľ�ΪF(n, m)���ɷֽ�Ϊ���������� F(n - 1, m - n)��F(n - 1, m)��������������ݹ���⣬������
//�У�����ҵ��˷���������������ϣ����ӡ���� ���� 1, 2, 3, 4, 5, ���ж�������Ϻ�Ϊ 5 ���� 1 ���Ԫ��
//��˵, ���ܻ�ŵ������, ���ܲ��ŵ������ ����ŵ������, ���൱���� 2...5 ��ȡ���ɸ����ֺ�Ϊ 4. (��Ϊ
//F(n - 1, m - n)) ������ŵ������, ���൱���� 2...5 ��ȡ���ɸ����ֺ�Ϊ 5. (��ΪF(n - 1, m))

#include<iostream>
#include<vector>
using namespace std;
void help(int n, int m, vector<int>& v, int beg) {
	// m == 0 Ϊ�ݹ��������. ��ʱ v �п����Ѿ����������ɸ�Ԫ����. ���� v �е����ݾ���һ����.
	if (m == 0) {
		for (int i = 0; i<v.size(); i++) {
			// ��� ? : ֻ��Ϊ���ý���ĸ�ʽ�ܹ���Ҫ��һ��.
			i == 0 ? cout << v[i] : cout << " " << v[i];
		} 
		cout << endl;
	} 
	for(int i = beg; i <= n&&i <= m; i++) {
			// ���¼��д����Ǹ���Ŀ�Ĺؼ�. �����ת��.
			// Ϊ���� i -> n �ж����������Ϊ m, �������ת��Ϊ
			// i + 1 -> n �ж����������Ϊ m - i
			v.push_back(i);
			help(n, m - i, v, i + 1);
			v.pop_back();
		}
} 

int main() {
	int n, m;
	while (cin >> n >> m) {
		vector<int>v;
		help(n, m, v, 1);
	}
}