﻿//Color_Classification：颜色分类
//https://leetcode-cn.com/problems/sort-colors/submissions/
//给定一个包含红色、白色和蓝色，一共 n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。
//此题中，我们使用整数 0、 1 和 2 分别表示红色、白色和蓝色。
//注意 :
//不能使用代码库中的排序函数来解决这道题。
//示例 :
//输入 : [2, 0, 2, 1, 1, 0]
//输出 : [0, 0, 1, 1, 2, 2]
//进阶：
//一个直观的解决方案是使用计数排序的两趟扫描算法。
//首先，迭代计算出0、1 和 2 元素的个数，然后按照0、1、2的排序，重写当前数组。
//你能想出一个仅使用常数空间的一趟扫描算法吗？

class Solution {
public:
	void sortColors(vector<int>& nums) {
		int a = 0, b = 0, c = 0;
		int len = nums.size();

		for (int i = 0; i < len; i++){
			if (nums[i] == 0){
				a++;
			}
			else if (nums[i] == 1){
				b++;
			}
			else if (nums[i] == 2){
				c++;
			}
		}

		nums.clear();
		nums.insert(nums.begin(), c, 2);
		nums.insert(nums.begin(), b, 1);
		nums.insert(nums.begin(), a, 0);
	}
};

