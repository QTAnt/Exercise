//https://leetcode-cn.com/problems/longest-palindromic-substring
///����һ���ַ���s���ҵ� s ����Ļ����Ӵ�������Լ��� s ����󳤶�Ϊ 1000��
//ʾ�� 1��
//���� : "babad"
// ��� : "bab"
//  ע�� : "aba" Ҳ��һ����Ч�𰸡�
//	   ʾ�� 2��
//   ���� : "cbbd"
//	��� : "bb"

class Solution {
public:
	string longestPalindrome(string s) {
		int n = s.size();
		if (n == 0) return s;
		bool dp[n][n];
		memset(dp, 0, sizeof(dp));
		int maxlen = 1, start = 0;
		for (int i = 0; i<n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				if (i - j<2) dp[i][j] = (s[i] == s[j]);
				else
					dp[i][j] = (s[i] == s[j] && dp[i - 1][j + 1] == 1);
				if (dp[i][j] && maxlen<i - j + 1)
				{
					maxlen = i - j + 1;
					start = j;
				}
			}
		}
		return s.substr(start, maxlen);

	}
};