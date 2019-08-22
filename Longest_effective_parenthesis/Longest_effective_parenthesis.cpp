Longest_effective_parenthesis:最长有效括号
https ://leetcode-cn.com/problems/longest-valid-parentheses/submissions/
给定一个只包含 '(' 和 ')' 的字符串，找出最长的包含有效括号的子串的长度。
示例 1 :
输入 : "(()"
输出 : 2
解释 : 最长有效括号子串为 "()"
示例 2 :
输入 : ")()())"
输出 : 4
解释 : 最长有效括号子串为 "()()"
class Solution {
public:
	int longestValidParentheses(string s) {
		int n = s.size();
		for (int i = 1; i<n; i++){
			if (s[i] == '(')
				continue;
			for (int j = i - 1; j >= 0; j--){
				if (s[j] == '('){
					// dp[j] = dp[j+1] + 2;
					if (s[j + 1] == '.' || s[j + 1] == ')'){
						s[j] = '.';
						s[i] = '.';
					}
					break;
				}
				else if (s[j] == ')')
					break;
			}
		}
		cout << s;
		int maxs = 0;
		for (int sum = 0, i = 0; i<n; i++){
			if (s[i] == '.'){
				sum++;
				maxs = max(maxs, sum);
			}
			else
				sum = 0;
		}
		return maxs;
	}
};