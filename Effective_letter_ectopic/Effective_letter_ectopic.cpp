//Effective_letter_ectopic:��Ч��ĸ��λ��
//https ://leetcode-cn.com/problems/valid-anagram/submissions/
//1.ֱ����sort���� 2.map���� 3.Ч�����

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
