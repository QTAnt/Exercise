//The_closest_sum_of_three_numbers
//https://leetcode-cn.com/problems/3sum-closest/
//����һ������ n ������������ nums �� һ��Ŀ��ֵ target���ҳ� nums �е�����������ʹ�����ǵĺ��� target ��ӽ����������������ĺ͡��ٶ�ÿ������ֻ����Ψһ�𰸡�
//���磬�������� nums = [-1��2��1�� - 4], �� target = 1.
//�� target ��ӽ����������ĺ�Ϊ 2. (-1 + 2 + 1 = 2).
class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		if (nums.size() < 2)
		{
			return 0;
		}
		sort(nums.begin(), nums.end());
		int ret = 99999999999;//ֻ��������һ����target����������������
		for (int i = 0; i < nums.size() - 2; i++)
		{
			if (i && nums[i] == nums[i - 1])//��ͬ�����ֲ���ȥ����
			{
				continue;
			}
			int l = i + 1, r = nums.size() - 1;
			while (l < r)//ָ���ײ
			{
				int sum = nums[l] + nums[r] + nums[i];
				if (abs(sum - target) < abs(ret - target))
				{
					ret = sum;
				}
				if (sum == target)
				{
					return sum;
				}
				else if (sum < target)
				{
					while (l < r && nums[l] == nums[l + 1])//�����ظ�����
						l++;
					l++;
				}
				else if (sum > target)
				{
					while (l < r && nums[r] == nums[r - 1])
						r--;
					r--;
				}
			}
		}
		return ret;
	}
};