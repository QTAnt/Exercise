//整数反转:Integer inversion
//https://leetcode-cn.com/problems/reverse-integer/
//给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
//示例 1:
//输入 : 123
//输出 : 321
//	 示例 2 :
// 输入 : -123
//  输出 : -321
//	   示例 3 :
//   输入 : 120
//	输出 : 21

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