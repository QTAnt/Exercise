//������ת:Integer inversion
//https://leetcode-cn.com/problems/reverse-integer/
//����һ�� 32 λ���з�������������Ҫ�����������ÿλ�ϵ����ֽ��з�ת��
//ʾ�� 1:
//���� : 123
//��� : 321
//	 ʾ�� 2 :
// ���� : -123
//  ��� : -321
//	   ʾ�� 3 :
//   ���� : 120
//	��� : 21

class Solution {
public:
	int reverse(int x) {
		long long ans = 0, negative = -1, temp = 0;
		negative = x<0 ? -1 : 1;
		temp = negative*x;
		while (temp)
		{
			ans = ans * 10 + temp % 10;
			temp /= 10;
		}
		return (ans<INT_MIN || ans>INT_MAX) ? 0 : ans*negative;
	}
};