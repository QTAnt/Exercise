////The_sum_of_four_numbers:����֮��
//https://leetcode-cn.com/problems/4sum/
//����һ������ n ������������ nums ��һ��Ŀ��ֵ target���ж� nums ���Ƿ�����ĸ�Ԫ�� a��b��c �� d ��ʹ�� a + b + c + d ��ֵ�� target ��ȣ��ҳ��������������Ҳ��ظ�����Ԫ�顣
//ע�⣺
//	���в����԰����ظ�����Ԫ�顣
//ʾ����
//	�������� nums = [1, 0, -1, 0, -2, 2]���� target = 0��
//	����Ҫ�����Ԫ�鼯��Ϊ��
//[
//	[-1, 0, 0, 1],
//	[-2, -1, 1, 2],
//	[-2, 0, 0, 2]
//]

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());   //��������
		if (nums.empty()) return{};

		for (int z = 0; z < nums.size(); z++){

			if (z > 0 && nums[z] == nums[z - 1]) continue;
			int newTarget = target - nums[z];   // ������֮��ת��Ϊ3��

			for (int k = z + 1; k < nums.size(); k++){   // �����������

				if (k > z + 1 && nums[k] == nums[k - 1]) continue;
				int newTarget2 = newTarget - nums[k];
				int i = k + 1, j = nums.size() - 1;
				while (i < j) {              // ����֮��ֱ�����á�����֮��2������
					if (nums[i] + nums[j] == newTarget2) {
						res.push_back({ nums[z], nums[k], nums[i], nums[j] });
						while (i < j && nums[i] == nums[i + 1]) ++i;   //ע��ȥ��
						while (i < j && nums[j] == nums[j - 1]) --j;
						++i; --j;
					}
					else if (nums[i] + nums[j] < newTarget2) ++i;

					else --j;
				}
			}

		}
		return res;
	}
};