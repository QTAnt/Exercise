////The_sum_of_four_numbers:四数之和
//https://leetcode-cn.com/problems/4sum/
//给定一个包含 n 个整数的数组 nums 和一个目标值 target，判断 nums 中是否存在四个元素 a，b，c 和 d ，使得 a + b + c + d 的值与 target 相等？找出所有满足条件且不重复的四元组。
//注意：
//	答案中不可以包含重复的四元组。
//示例：
//	给定数组 nums = [1, 0, -1, 0, -2, 2]，和 target = 0。
//	满足要求的四元组集合为：
//[
//	[-1, 0, 0, 1],
//	[-2, -1, 1, 2],
//	[-2, 0, 0, 2]
//]

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());   //首先排序
		if (nums.empty()) return{};

		for (int z = 0; z < nums.size(); z++){

			if (z > 0 && nums[z] == nums[z - 1]) continue;
			int newTarget = target - nums[z];   // 将四数之和转化为3数

			for (int k = z + 1; k < nums.size(); k++){   // 三数变成两数

				if (k > z + 1 && nums[k] == nums[k - 1]) continue;
				int newTarget2 = newTarget - nums[k];
				int i = k + 1, j = nums.size() - 1;
				while (i < j) {              // 两数之和直接套用《两数之和2》的题
					if (nums[i] + nums[j] == newTarget2) {
						res.push_back({ nums[z], nums[k], nums[i], nums[j] });
						while (i < j && nums[i] == nums[i + 1]) ++i;   //注意去重
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