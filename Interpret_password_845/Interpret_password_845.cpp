//Interpret_password_845���������
//https ://www.nowcoder.com/questionTerminal/16fa68271ee5448cafd504bb4a64b482
//����Ŀ������
//��Ŀ��˼�������ַ����а�����������һ�����֣����ַ��������ֽ���������
//������˼·��
//1. ��Ŀ��ȷ˵���ж��У�����getline����ѭ������
//2. ��������ַ������б���������������ַ��������������

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstdio>
using namespace std;

int main(){
	string s;
	while (getline(cin, s)){
		int len = s.length();
		for (int i = 0; i<len; i++){
			if (s[i] >= '0'&&s[i] <= '9')
				cout << s[i];
		} 
			cout << endl;
	} 
		return 0;
}