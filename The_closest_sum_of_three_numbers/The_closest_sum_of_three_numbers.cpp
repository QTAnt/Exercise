//The_closest_sum_of_three_numbers
//https://leetcode-cn.com/problems/3sum-closest/
//给定一个包括 n 个整数的数组 nums 和 一个目标值 target。找出 nums 中的三个整数，使得它们的和与 target 最接近。返回这三个数的和。假定每组输入只存在唯一答案。
//例如，给定数组 nums = [-1，2，1， - 4], 和 target = 1.
//与 target 最接近的三个数的和为 2. (-1 + 2 + 1 = 2).
class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		if (nums.size() < 2)
		{
			return 0;
		}
		sort(nums.begin(), nums.end());
		int ret = 99999999999;//只是想设置一个和target差别大于所有数的数
		for (int i = 0; i < nums.size() - 2; i++)
		{
			if (i && nums[i] == nums[i - 1])//相同的数字不必去计算
			{
				continue;
			}
			int l = i + 1, r = nums.size() - 1;
			while (l < r)//指针对撞
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
					while (l < r && nums[l] == nums[l + 1])//跳过重复数字
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