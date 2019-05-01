//Number_of_tracts��https://leetcode-cn.com/problems/palindrome-number/
//�ж�һ�������Ƿ��ǻ���������������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������
//ʾ�� 1:
//���� : 121
//��� : true
//	 ʾ�� 2 :
//���� : -121
//��� : false
//���� : �������Ҷ�, Ϊ - 121 �� ���������, Ϊ 121 - �����������һ����������
//		ʾ�� 3 :
//���� : 10
//��� : false
//���� : ���������, Ϊ 01 �����������һ����������

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0 || (x % 10 == 0 && x != 0))
		{
			return false;
		}
		int ret = 0;
		while (x>ret)
		{
			ret = ret * 10 + x % 10;
			x /= 10;
		}
		return x == ret || x == ret / 10;
	}
};
