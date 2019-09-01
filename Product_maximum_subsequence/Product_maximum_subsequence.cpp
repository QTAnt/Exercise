﻿//Product_maximum_subsequence：乘积最大子序列
//https ://leetcode-cn.com/problems/maximum-product-subarray/submissions/
//给定一个整数数组 nums ，找出一个序列中乘积最大的连续子序列（该序列至少包含一个数）。
//示例 1 :
//输入 : [2, 3, -2, 4]
//输出 : 6
//解释 : 子数组[2, 3] 有最大乘积 6。
//示例 2 :
//输入 : [-2, 0, -1]
//输出 : 0
//解释 : 结果不能为 2, 因为[-2, -1] 不是子数组。
class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int n = nums.size();

		int a = 1, b = 1;
		int maxVal = INT_MIN;

		for (int i = 0; i < n; ++i) {
			int aa = a * nums[i];
			int bb = b * nums[i];

			a = min(nums[i], min(aa, bb));
			b = max(nums[i], max(aa, bb));

			maxVal = max(maxVal, b);
		}
		return maxVal;
	}
};