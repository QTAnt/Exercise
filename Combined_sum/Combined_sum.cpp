﻿//Combined_sum:组合总和
//https ://leetcode-cn.com/problems/combination-sum/submissions/
//给定一个无重复元素的数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。
//candidates 中的数字可以无限制重复被选取。
//说明：
//所有数字（包括 target）都是正整数。
//解集不能包含重复的组合。 
//示例 1 :
//输入 : candidates = [2, 3, 6, 7], target = 7,
//所求解集为 :
//[
//	[7],
//	[2, 2, 3]
//]
//示例 2 :
//输入 : candidates = [2, 3, 5], target = 8,
//所求解集为 :
//[
//	[2, 2, 2, 2],
//	[2, 3, 3],
//	[3, 5]
//]

class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> res;
		vector<int> tmp;
		combinationSumCore(res, candidates, target, tmp, 0, 0);
		return res;
	}
	void combinationSumCore(vector<vector<int>> &res, vector<int>& candidates, int target, vector<int>& tmp, int sum, int begin){
		if (sum == target){
			res.push_back(tmp);
		}
		else{
			for (int i = begin; i<candidates.size(); ++i){
				if (sum + candidates[i] <= target){
					tmp.push_back(candidates[i]);
					combinationSumCore(res, candidates, target, tmp, sum + candidates[i], i);
					tmp.pop_back();
				}
			}
		}
	}
};
