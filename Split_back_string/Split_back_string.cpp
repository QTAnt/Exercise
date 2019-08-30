//Split_back_string�������ַ���
//https ://leetcode-cn.com/problems/palindrome-partitioning/submissions/
//����һ���ַ��� s���� s �ָ��һЩ�Ӵ���ʹÿ���Ӵ����ǻ��Ĵ���
//���� s ���п��ܵķָ����
//ʾ�� :
//���� : "aab"
//��� :
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