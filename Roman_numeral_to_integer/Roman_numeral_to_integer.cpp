//��������ת������Roman_numeral_to_integer
//https://leetcode-cn.com/problems/roman-to-integer/
//�������ְ������������ַ�: I�� V�� X�� L��C��D �� M��
//�ַ�          ��ֵ
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//���磬 �������� 2 д�� II ����Ϊ�������е� 1��12 д�� XII ����Ϊ X + II �� 27 д��  XXVII,��Ϊ XX + V + II ��
//ͨ������£�����������С�������ڴ�����ֵ��ұߡ���Ҳ�������������� 4 ��д�� IIII������ IV������ 1 ������ 5 ����ߣ�����ʾ�������ڴ��� 5 ��С�� 1 �õ�����ֵ 4 ��ͬ���أ����� 9 ��ʾΪ IX���������Ĺ���ֻ�������������������
//I ���Է��� V(5) �� X(10) ����ߣ�����ʾ 4 �� 9��
//X ���Է��� L(50) �� C(100) ����ߣ�����ʾ 40 �� 90��
//C ���Է��� D(500) �� M(1000) ����ߣ�����ʾ 400 �� 900��
//����һ���������֣�����ת��������������ȷ���� 1 �� 3999 �ķ�Χ�ڡ�
//ʾ�� 1:
//	���� : "III"
//	��� : 3
//ʾ�� 2 :
//	���� : "IV"
//	��� : 4
//ʾ�� 3 :
//	���� : "IX"
//	��� : 9
//ʾ�� 4 :
//	���� : "LVIII"
//	��� : 58
//	���� : L = 50, V = 5, III = 3.
//ʾ�� 5 :
//	���� : "MCMXCIV"
//	��� : 1994
//	���� : M = 1000, CM = 900, XC = 90, IV = 4.

class Solution {
public:
	int romanToInt(string s) {
		int l = s.size();
		int max = 0, num = 0;
		for (int i = l - 1; i >= 0; i--)
		{
			switch (s[i])
			{
			case 'I':
				if (max>0)
					num -= 1;
				else
					num += 1;
				break;
			case 'V':
				max = 5;
				num += 5;
				break;
			case 'X':
				if (max>10)
					num -= 10;
				else
				{
					num += 10;
					max = 10;
				}
				break;
			case 'L':
				max = 50;
				num += 50;
				break;
			case 'C':
				if (max>100)
					num -= 100;
				else
				{
					max = 100;
					num += 100;
				}
				break;
			case 'D':
				max = 500;
				num += 500;
				break;
			case 'M':
				max = 1000;
				num += 1000;
				break;
			default:
				cout << "�������!!!";
			}
		}
		return num;
	}
};