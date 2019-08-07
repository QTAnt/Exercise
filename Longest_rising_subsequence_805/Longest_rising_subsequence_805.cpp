//Longest_rising_subsequence_805：最长上升子序列
//https ://www.nowcoder.com/questionTerminal/d83721575bd4418eae76c916483493de
//【题目解析】
//在一个序列中找最长递增子序列，动态规划的典型应用，详细见解题思路
//【解题思路】
//动态规划的难点在于定义数组和创建“状态转移方程”。
//1. 定义height来存储数据，f[i]为以height[i]结尾的元素的最长上升子序列元素个数，初始时将f所有内容
//全部初始化成1，因为子序列中至少包含一个元素。
//2. 定义"状态转移方程"
//一开始先将f中的数据全部置为1，因为最小的子序列长度为1
//然后对于每个height[i]，通过遍历height[0]~~height[i - 1]之间的数据，如果在该区间中找到一个
//height[j]比height[j]小的元素，开始比较f[j] + 1和f[i]的大小，如果f[j] + 1>f[j]则更新f[i], 因此：
//当height[i] > height[j]: f[i] = max(f[i], f[j] + 1)
//当height[i] <= height[j]：继续取下一个数据

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		// 接受用户输入的数据
		vector<int> height(n, 0);
		for (int i = 0; i < n; i++){
			cin >> height[i];
		} // f用来保存状态转移方程的结果，f[i]表示以height[i]结尾的最长上升子序列所包含元素的个数
			vector<int> f(n, 1);
		int result = 1;
		// 子序列中的数据一个一个增加
		for (int i = 1; i < n; i++){
			// 从0开始统计到i位置，最长上升子序列长度
			for (int j = 0; j < i; j++){
				if (height[i] > height[j]){
					f[i] = max(f[i], f[j] + 1);
				}
			} // 获取从0到i位置的最长子序列长度
				result = max(result, f[i]);
		} 
			cout << result << endl;
	}
}