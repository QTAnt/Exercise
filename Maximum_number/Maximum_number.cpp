//Maximum_number:最大数
//https ://leetcode-cn.com/problems/largest-number/
//给定一组非负整数，重新排列它们的顺序使之组成一个最大的整数。
//示例 1 :
//
//输入 : [10, 2]
//输出 : 210
//示例 2 :
//
// 输入 : [3, 30, 34, 5, 9]
//输出 : 9534330
//说明 : 输出结果可能非常大，所以你需要返回一个字符串而不是整数。

class Solution {
public:
	string largestNumber(vector<int>& nums) {
		if (nums.empty()) return string("0");
		sort(nums.begin(), nums.end(), isLarger);
		string ss;
		bool non_zero = false;
		for (auto &i : nums){
			if (!non_zero && i != 0)
				non_zero = true;
			if (non_zero)
				ss += to_string(i);
		}
		if (!ss.empty()) return ss;
		else return string("0");
	}

	static bool isLarger(const int& i1, const int& i2){
		string s1 = to_string(i1);
		string s2 = to_string(i2);
		return (s1 + s2) > (s2 + s1);
	}
};