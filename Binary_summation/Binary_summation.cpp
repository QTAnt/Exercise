Binary_summation：二进制求和
https ://leetcode-cn.com/problems/add-binary/
给定两个二进制字符串，返回他们的和（用二进制表示）。
输入为非空字符串且只包含数字 1 和 0。
示例 1 :
输入 : a = "11", b = "1"
输出 : "100"
示例 2 :
输入 : a = "1010", b = "1011"
输出 : "10101"


class Solution {
public:
	string addBinary(string a, string b) {
		string result;
		if (a.size() == 0 && b.size() == 0)
			return result;
		if (a.size() == 0)
			return b;
		if (b.size() == 0)
			return a;
		int carry = 0, sum = 0;//carry是进位
		for (int i = a.size() - 1, j = b.size() - 1; (i>-1 || j>-1); --i, --j)//从尾向前遍历
		{
			if (i>-1 && j>-1)
				sum = (a[i] - '0') + (b[j] - '0') + carry;
			else if (i <= -1 && j>-1)
				sum = (b[j] - '0') + carry;
			else if (i>-1 && j <= -1)
				sum = (a[i] - '0') + carry;
			//ab都还没遍历完，遍历完a，遍历完b三种情况合成一种情况
			result += ((sum % 2) + '0');
			carry = sum / 2;
		}
		if (carry == 1)
			result += (carry + '0');
		reverse(result.begin(), result.end());
		return result;
	}
};