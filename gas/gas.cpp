﻿//gas：加油站
//https://leetcode-cn.com/problems/gas-station/submissions/
//在一条环路上有 N 个加油站，其中第 i 个加油站有汽油 gas[i] 升。
//你有一辆油箱容量无限的的汽车，从第 i 个加油站开往第 i + 1 个加油站需要消耗汽油 cost[i] 升。你从其中的一个加油站出发，开始时油箱为空。
//如果你可以绕环路行驶一周，则返回出发时加油站的编号，否则返回 - 1。
//说明 :
//如果题目有解，该答案即为唯一答案。
//输入数组均为非空数组，且长度相同。
//输入数组中的元素均为非负数。
//示例 1 :
//输入 :
//gas = [1, 2, 3, 4, 5]
//cost = [3, 4, 5, 1, 2]
//输出 : 3
//解释 :
//从 3 号加油站(索引为 3 处)出发，可获得 4 升汽油。此时油箱有 = 0 + 4 = 4 升汽油
//开往 4 号加油站，此时油箱有 4 - 1 + 5 = 8 升汽油
//开往 0 号加油站，此时油箱有 8 - 2 + 1 = 7 升汽油
//开往 1 号加油站，此时油箱有 7 - 3 + 2 = 6 升汽油
//开往 2 号加油站，此时油箱有 6 - 4 + 3 = 5 升汽油
//开往 3 号加油站，你需要消耗 5 升汽油，正好足够你返回到 3 号加油站。
//因此，3 可为起始索引。
//示例 2:
//输入 :
//gas = [2, 3, 4]
//cost = [3, 4, 3]
//输出 : -1
//解释 :
//你不能从 0 号或 1 号加油站出发，因为没有足够的汽油可以让你行驶到下一个加油站。
//我们从 2 号加油站出发，可以获得 4 升汽油。 此时油箱有 = 0 + 4 = 4 升汽油
//开往 0 号加油站，此时油箱有 4 - 3 + 2 = 3 升汽油
//开往 1 号加油站，此时油箱有 3 - 3 + 3 = 3 升汽油
//你无法返回 2 号加油站，因为返程需要消耗 4 升汽油，但是你的油箱只有 3 升汽油。
//因此，无论怎样，你都不可能绕环路行驶一周。
class Solution {
public:
	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
		// 标记起始点
		int start = 0;
		// 判断所有和是否大于等于零，如果小于零，则绝无可能能走完全程
		int total = 0;
		// 过关卡用的数据，如果当前关卡过不去，则该点以前的所有起始点都不能作为答案
		// 证明，一个起始点必定差值 大于零， 到关卡过不去的那个点必然差值小于0，如果从中间任意一点作为起始点，在扣除了一开始可能的正值后，就更加不可能过得了那个关卡了
		int sum = 0;
		int size = gas.size();
		for (int i = 0; i<size; i++){
			total += gas[i] - cost[i];
			sum += gas[i] - cost[i];
			if (sum < 0){
				// 试试下一个起始点
				start = i + 1;
				sum = 0;
			}
		}
		return total >= 0 ? start : -1;
	}
};