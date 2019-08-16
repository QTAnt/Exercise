//Dividing_two_numbers:两处相除
//https://leetcode-cn.com/problems/divide-two-integers/submissions/
//给定两个整数，被除数 dividend 和除数 divisor。将两数相除，要求不使用乘法、除法和 mod 运算符。
//返回被除数 dividend 除以除数 divisor 得到的商。
//示例 1 :
//输入 : dividend = 10, divisor = 3
//输出 : 3
//示例 2 :
//输入 : dividend = 7, divisor = -3
//输出 : -2
//说明 :
//被除数和除数均为 32 位有符号整数。
//除数不为 0。
//假设我们的环境只能存储 32 位有符号整数，其数值范围是[−231, 231 − 1]。本题中，如果除法结果溢出，则返回 231 − 1。

class Solution {
public:
	int divide(int dividend, int divisor) {
		if (divisor == -1 && dividend == INT_MIN) return INT_MAX;
		if (divisor == 1 && dividend == INT_MIN) return INT_MIN;
		int sign = (dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0) ? -1 : 1;
		if (divisor == INT_MIN) return dividend == INT_MIN ? 1 : 0;
		divisor = abs(divisor);

		int res = 0;
		if (dividend == INT_MIN){
			res += 1;
			dividend += divisor;
		}

		dividend = abs(dividend);
		if (divisor  > dividend) return res*sign;
		while (dividend != 1 && dividend != 0 && dividend > divisor){
			int tmp = divisor; int cnt = 1;
			while (dividend > (tmp << 1)){
				if ((tmp << 1)  < tmp) break;
				tmp = tmp << 1;
				cnt = cnt << 1;
			}
			dividend -= tmp;
			res += cnt;
		}
		res = (res + (dividend < divisor ? 0 : 1)) * sign;
		return res;
	}
};
