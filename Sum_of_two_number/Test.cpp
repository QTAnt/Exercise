//https://leetcode-cn.com/problems/two-sum/
//
//����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ
//����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ��㲻���ظ��������������ͬ����Ԫ�ء�

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); i++){
			map[nums[i]] = i;
		}

		vector<int> res;
		for (int i = 0; i < nums.size(); i++){
			auto it = map.find(target - nums[i]);
			if (it != map.end() && it->second != i){
				res.push_back(it->second);
				res.push_back(i);
				break;
			}
		}
		return res;
	}
};