//https://leetcode-cn.com/problems/longest-palindromic-substring
///给定一个字符串s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。
//示例 1：
//输入 : "babad"
// 输出 : "bab"
//  注意 : "aba" 也是一个有效答案。
//	   示例 2：
//   输入 : "cbbd"
//	输出 : "bb"

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