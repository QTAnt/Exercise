//https://leetcode-cn.com/problems/two-sum/
//
//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
//你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

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