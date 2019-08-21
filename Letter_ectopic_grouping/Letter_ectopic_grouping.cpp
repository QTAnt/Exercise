//Letter_ectopic_grouping:字母异位词分组
//https ://leetcode-cn.com/problems/group-anagrams/submissions/
//给定一个字符串数组，将字母异位词组合在一起。字母异位词指字母相同，但排列不同的字符串。
//示例 :
//输入 : ["eat", "tea", "tan", "ate", "nat", "bat"],
//输出 :
//[
//["ate", "eat", "tea"],
//["nat", "tan"],
//["bat"]
//]
//说明：
//所有输入均为小写字母。
//不考虑答案输出的顺序。

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> res;
		map<string, vector<string>> M;
		for (int i = 0; i<strs.size(); i++){
			string key = strs[i];
			sort(key.begin(), key.end());
			M[key].push_back(strs[i]);
		}
		for (auto ite = M.begin(); ite != M.end(); ite++)
			res.push_back(ite->second);
		return res;
	}
};