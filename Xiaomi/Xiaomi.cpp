//֤ȯ��Ʊ�۸�ʱʱ�̶���������������Ī�⣬��α�֤�õ����������ÿ��Ͷ��������׷������ģ�����һ�����飬  ���ĵ�i��Ԫ����һ֧������Ʊ��i��ļ۸���������ֻ�������һ�ʽ���(�����������һ֧��Ʊ)�����һ���㷨�����������ܻ�ȡ���������
//���룺����һ�����飬��������������֣�����ģ��۸�������
//���������۸������ڵ�������棬���û������, ����0����
//�������룺[7, 1, 4.3, 1]
//���������3
//AC��50%
#include <iostream>
#include <vector>
#include <string>
using namespace std;
	
int Max(vector<int>& v, int n){
	
	int p, tmp = 0;
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			p = v[j] - v[i];
			if (p > tmp)
				n = p;
		}
	}
	return n;
}

int main(){
	string s;
	cin >> s;
	vector<int> p;
	for (size_t i = 1; i < s.size(); i++){
		string cur = "";
		size_t end = i;
		while (end < s.size() && s[end] != ',' && s[end] != '['&& s[end] != ']'){
			cur = cur + s[end];
			end++;
		}
		int num = 0;
		i = end;
		num = atoi(cur.c_str());
		p.push_back(num);
	}
	cout << Max(p, p.size()) << endl;
	return 0;
}