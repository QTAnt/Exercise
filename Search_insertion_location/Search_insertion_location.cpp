//Search_insertion_location:ËÑË÷²åÈëÎ»ÖÃ
//https://leetcode-cn.com/problems/search-insert-position/submissions/
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		for (int i = 0; i<nums.size(); i++)
		{
			if (nums[i] >= target)
				return i;
		}
		return nums.size();
	}
};
