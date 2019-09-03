//Summary_interval：汇总区间
//https ://leetcode-cn.com/problems/summary-ranges/submissions/
//给定一个无重复元素的有序整数数组，返回数组区间范围的汇总。
//示例 1 :
//输入 : [0, 1, 2, 4, 5, 7]
//输出 : ["0->2", "4->5", "7"]
//解释 : 0, 1, 2 可组成一个连续的区间; 4, 5 可组成一个连续的区间。
//示例 2:
//输入 : [0, 2, 3, 4, 6, 8, 9]
//输出 : ["0", "2->4", "6", "8->9"]
//解释 : 2, 3, 4 可组成一个连续的区间; 8, 9 可组成一个连续的区间。

class Solution {
public:
	vector<string> summaryRanges(vector<int>& nums) {
		if (nums.empty()) return{};
		vector<string> res;
		int l = nums[0], last = nums[0];
		for (int i = 1; i < nums.size(); ++i) {
			if (nums[i] != last + 1)
			{
				if (l == last) res.push_back(to_string(l));
				else res.push_back(to_string(l) + "->" + to_string(last));
				l = nums[i]; last = l;
			}
			else
				last = nums[i];
		}
		if (l == last) res.push_back(to_string(l));
		else res.push_back(to_string(l) + "->" + to_string(last));
		return res;
	}
};