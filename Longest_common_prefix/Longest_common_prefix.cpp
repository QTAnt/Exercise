//�����ǰ׺��Longest_common_prefix
//https://leetcode-cn.com/problems/longest-common-prefix/submissions/
//��дһ�������������ַ��������е������ǰ׺��
//��������ڹ���ǰ׺�����ؿ��ַ��� ""��
//ʾ�� 1:
//	���� : ["flower", "flow", "flight"]
//	��� : "fl"
//ʾ�� 2 :
//	���� : ["dog", "racecar", "car"]
//	��� : ""
//	���� : ���벻���ڹ���ǰ׺��
//	˵�� :��������ֻ����Сд��ĸ a - z ��

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