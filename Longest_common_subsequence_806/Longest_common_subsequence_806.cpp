//Longest_common_subsequence_806：最长公共子序列
//https ://www.nowcoder.com/questionTerminal/9ae56e5bdf4f480387df781671db5172
//【题目解析】
//题目要求比较简单：获取两个字符串的最长公共的子序列，注意：子序列即两个字符串中公共的字符，但不
//一定连续。
//【解题思路】
//动态规划求解最长公共子序列(LCS) : 对于母串X = <x1, x2, ⋯, xm>, Y = <y1, y2, ⋯, yn>，求LCS，假设：假设Z =
//<z1, z2, ⋯, zk>是X与Y的LCS， 我们观察到：
//1. 如果xm = yn，则zk = xm = yn，有Zk−1是Xm−1与Yn−1的LCS
//2. 如果xm≠yn，则Zk是Xm与Yn−1的LCS，或者是Xm−1与Yn的LCS
//因此，求解LCS的问题则变成递归求解的两个子问题。但是，上述的递归求解的办法中，重复的子问题多，
//效率低下。改进的办法——用空间换时间，用数组保存中间状态，方便后面的计算。这就是动态规划（DP)的
//核心思想了。
//用二维数组dp[i, j]记录串x1x2⋯xi与y1y2⋯yj的LCS长度，则可得到状态转移方程：
//1. dp[i, j] = 0i = 0 or j = 0
//2. dp[i, j] = dp[i−1, j−1] + 1 i, j>0 and xi = yj
//3. dp[i, j] = max(dp[i, j−1], dp[i−1, j]) i, j>0 and xi≠yj

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string A, B;
	while (cin >> A >> B) {
		int aLength = A.length();
		int bLength = B.length();
		// 用来保存状态转移方程中间结果的矩阵
		vector<vector<int> > dp(aLength, vector<int>(bLength, 0));
		// 初始化dp矩阵边界：边界字符要么在，要么不在
		dp[0][0] = (A[0] == B[0]) ? 1 : 0;
		for (int i = 1; i<aLength; i++) {
			dp[i][0] = (A[i] == B[0]) ? 1 : 0;
			dp[i][0] = max(dp[i - 1][0], dp[i][0]);
		} 
			for(int j = 1; j<bLength; j++) {
				dp[0][j] = (A[0] == B[j]) ? 1 : 0;
				dp[0][j] = max(dp[0][j - 1], dp[0][j]);
			} // 根据状态转移方程进行计算
			for (int i = 1; i<aLength; i++) {
				for (int j = 1; j<bLength; j++) {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
					if (A[i] == B[j]) {
						dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
					}
				}
			} 
				cout << dp[aLength - 1][bLength - 1] << endl;
	} 
		return 0;
}