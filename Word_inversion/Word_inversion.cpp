//Word_inversion�����ʵ���
//����Ŀ��������
//��������ǰ������ַ������������� �з� �� �ϲ� ��Ȼ���� C ���Կ��Ͻ������Ƶ�����, �����������ı�
//���ǶԵ��ʷָ����������, ֻҪ����ĸ, ����Ҫ���ɷָ��, ���ҷָ������Ŀ��������.
//������˼·����
//���������˼·��Ȼ��
//1. ���з�(�з�ǰ�ȶԷָ��������, ͳһ�ָ��), ��ʱ����ʹ�� stringstream �����з�
//2. �ٺϲ�(���зֽ������ϲ�) ֱ���ַ���ƴ�Ӻϲ�����

#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
void deal(vector<string>&res, string& str, char delim = ' ') {
	// ���ַ��������з�, ���� stringstream ���. Ĭ�Ϸָ���ǿո�.
	// stringstream ����������з�, ��������ַ���������֮���ת��.
	stringstream ss;
	ss << str;
	string tmp;
	while (ss >> tmp) {
		res.push_back(tmp);
	}
} 
int main() {
	string str;
	while (getline(cin, str)) {
		vector<string> res;
		for (int i = 0; i < str.size(); i++)
			// �ȶԷָ�����д���. ������ַָ��, ��ͳһ����ɿո�.
		if (!isalnum(str[i]))
			str[i] = ' ';
		// ���ַ��������з�
		deal(res, str);
		cout << res[res.size() - 1];
		for (int i = res.size() - 2; i >= 0; i--)
			cout << " " << res[i];
		cout << endl;
	} 
	return 0;
}