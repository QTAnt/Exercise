//Summation：求和
//【题目解析】：
//基于递归实现 dfs(深度优先搜索) 即可.这是一个比较典型的背包问题
//【解题思路】：
//假设问题的解为F(n, m)，可分解为两个子问题 F(n - 1, m - n)和F(n - 1, m)。对这两个问题递归求解，求解过程
//中，如果找到了符合条件的数字组合，则打印出来 例如 1, 2, 3, 4, 5, 求有多少中组合和为 5 对于 1 这个元素
//来说, 可能会放到结果中, 可能不放到结果中 如果放到结果中, 就相当于求 2...5 中取若干个数字和为 4. (即为
//F(n - 1, m - n)) 如果不放到结果中, 就相当于求 2...5 中取若干个数字和为 5. (即为F(n - 1, m))

#include<iostream>
#include<vector>
using namespace std;
void help(int n, int m, vector<int>& v, int beg) {
	// m == 0 为递归结束条件. 此时 v 中可能已经包含了若干个元素了. 并且 v 中的内容就是一组结果.
	if (m == 0) {
		for (int i = 0; i<v.size(); i++) {
			// 这个 ? : 只是为了让结果的格式能够和要求一样.
			i == 0 ? cout << v[i] : cout << " " << v[i];
		} 
		cout << endl;
	} 
	for(int i = beg; i <= n&&i <= m; i++) {
			// 以下几行代码是该题目的关键. 问题的转换.
			// 为了求 i -> n 有多少种情况和为 m, 则把问题转换为
			// i + 1 -> n 有多少中情况和为 m - i
			v.push_back(i);
			help(n, m - i, v, i + 1);
			v.pop_back();
		}
} 

int main() {
	int n, m;
	while (cin >> n >> m) {
		vector<int>v;
		help(n, m, v, 1);
	}
}