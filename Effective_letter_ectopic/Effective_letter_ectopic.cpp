//Effective_letter_ectopic:有效字母异位词
//https ://leetcode-cn.com/problems/valid-anagram/submissions/
//1.直接用sort函数 2.map计数 3.效率最高

class Solution {
public:
	bool isAnagram(string s, string t) {
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		if (s == t)
			return true;
		else
			return false;
	}
};
