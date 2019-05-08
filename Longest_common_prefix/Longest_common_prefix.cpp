//最长公共前缀：Longest_common_prefix
//https://leetcode-cn.com/problems/longest-common-prefix/submissions/
//编写一个函数来查找字符串数组中的最长公共前缀。
//如果不存在公共前缀，返回空字符串 ""。
//示例 1:
//	输入 : ["flower", "flow", "flight"]
//	输出 : "fl"
//示例 2 :
//	输入 : ["dog", "racecar", "car"]
//	输出 : ""
//	解释 : 输入不存在公共前缀。
//	说明 :所有输入只包含小写字母 a - z 。

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		int size = strs.size();
		if (size == 0) return "";
		string ret = strs[0];
		for (int i = 1; i<size; ++i)
		{
			for (int j = 0; j<ret.size(); ++j)
			{
				if (strs[i][j] != ret[j]) ret.assign(ret, 0, j);
			}
		}
		return ret;
	}
};