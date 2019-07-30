//Database_connection_pool�����ݿ����ӳ�_797
//https://www.nowcoder.com/questionTerminal/05f97d9b29944c018578d98d7f0ce56e
//[��Ŀ����]
//1. ��������̨�������ݿ�ʱ����Ҫ���������ݿ⣬��Ϊ���������ݿ⣬��Ҫ���ӷ������ݿ�����ϸ��Զ�
//Ҫά�����ӣ������ӱ���Ĵ���ά�����гɱ���
//2. Ҫ���ٿ���������Ľ���������ǽ���ǰ��mysql���Ӹ����������Ӷ���ʡ�˴��������ٵ�ʱ��ɱ���
//����Ŀ��������������㷨�������־�����㵱ǰ��ҵ����ҪԤ�ȴ����������ӣ�����������ʹ��
//[����˼·]
//ʹ��һ��set���������ĳ����¼��connect���ͼӵ�set��ȥ�������disconnect���Ͱ�set�ж�Ӧ��ֵɾ��
//�����ڼӽ�ȥ�Ĺ����У������ж�setԪ�ص������������շ����������������

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		set<string> pool;
		string id, con;
		int maxSize = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> id >> con;
			if (con == "connect") pool.insert(id);
			else if (con == "disconnect") pool.erase(id);
			int size = pool.size();
			maxSize = max(maxSize, size);
		} 
		cout << maxSize << endl;
	} 
	return 0;
}