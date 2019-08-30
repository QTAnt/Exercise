//Split_back_string：回文字符串
//https ://leetcode-cn.com/problems/palindrome-partitioning/submissions/
//给定一个字符串 s，将 s 分割成一些子串，使每个子串都是回文串。
//返回 s 所有可能的分割方案。
//示例 :
//输入 : "aab"
//输出 :
//   [
//	   ["aa", "b"],
//	   ["a", "a", "b"]
//   ]
	 
class Solution {
public:
	vector<vector<string>> partition(string s) {
		vector<string> each;
		vector<vector<string>> res;
		dfs_partition(s, each, res);
		return res;
	}
	void dfs_partition(string s, vector<string>& each, vector<vector<string>>& res) {
		if (s.empty()) {
			res.push_back(each);
			return;
		}

		for (int i = 0; i < s.size(); ++i) {
			string str = s.substr(0, i + 1);
			string rev = str;
			std::reverse(rev.begin(), rev.end());
			if (str == rev) {
				each.push_back(str);
				dfs_partition(s.substr(i + 1), each, res);
				each.pop_back();
			}
		}

	}
};