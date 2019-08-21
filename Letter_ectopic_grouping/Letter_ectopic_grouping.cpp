//Letter_ectopic_grouping:��ĸ��λ�ʷ���
//https ://leetcode-cn.com/problems/group-anagrams/submissions/
//����һ���ַ������飬����ĸ��λ�������һ����ĸ��λ��ָ��ĸ��ͬ�������в�ͬ���ַ�����
//ʾ�� :
//���� : ["eat", "tea", "tan", "ate", "nat", "bat"],
//��� :
//[
//["ate", "eat", "tea"],
//["nat", "tan"],
//["bat"]
//]
//˵����
//���������ΪСд��ĸ��
//�����Ǵ������˳��

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