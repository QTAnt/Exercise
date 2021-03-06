﻿//Seeking_the_majority：求众数
//https ://leetcode-cn.com/problems/majority-element/submissions/
//给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ⌊ n / 2 ⌋ 的元素。
//你可以假设数组是非空的，并且给定的数组总是存在众数。
//示例 1 :
//输入 : [3, 2, 3]
//输出 : 3
//示例 2 :
//输入 : [2, 2, 1, 1, 1, 2, 2]
//输出 : 2

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int i = 0;
		int n = 1;
		while (i<nums.size() - 1)
		{
			while (i + 1<nums.size() && nums[i + 1] == nums[i])
			{
				n++;
				i++;
			}
			if (n > (nums.size() / 2))
				return nums[i];
			n = 1;
			i++;
		}
		return nums[i];
	}
};