//Find_the_number_of_1_in_the_integer_binary������������������1 �ĸ���
//https ://www.nowcoder.com/practice/1b46eb4cf3fa49b9965ac3c2c1caf5ad?tpId
//��Ŀ����
//��ʵ�����½ӿ�
//public   static   int  findNumberOf1(int num)
//{
//	/*  ��ʵ��  */
//	return  0;
//} Ʃ�磺����5 ��5�Ķ�����Ϊ101�����2
//�漰֪ʶ�㣺
//�������� :
//����һ������
//������� :
//����������������1�ĸ���
//ʾ��1
//����
//����
//5
//���
//����
//2

#include<iostream>
using namespace std;
int main(){
	int n;
	while (cin >> n)
	{
		int count = 0;
		while (n)
		{
			if ((n & 1) == 1)
				count += 1;
			n >>= 1;
		}
		cout << count << endl;
	} return 0;
}