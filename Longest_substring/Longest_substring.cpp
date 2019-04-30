//https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/
//����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�
/*ʾ�� 1:
  ���� : "abcabcbb"
  ��� : 3
  ���� : ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��

ʾ�� 2 :
  ���� : "bbbbb"
  ��� : 1
	���� : ��Ϊ���ظ��ַ�����Ӵ��� "b"�������䳤��Ϊ 1��
 
ʾ�� 3 :
	���� : "pwwkew"
	��� : 3
	���� : ��Ϊ���ظ��ַ�����Ӵ��� "wke"�������䳤��Ϊ 3��
			��ע�⣬��Ĵ𰸱����� �Ӵ� �ĳ��ȣ�"pwke" ��һ�������У������Ӵ�*/

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int  size, i = 0, j, k, max = 0;
		size = s.size();
		for (j = 0; j<size; j++){
			for (k = i; k<j; k++)
			if (s[k] == s[j]){
				i = k + 1;
				break;
			}
			if (j - i + 1 > max)
				max = j - i + 1;
		}
		return max;
	}
};