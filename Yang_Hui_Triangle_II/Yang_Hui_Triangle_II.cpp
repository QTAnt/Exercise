//Yang_Hui_Triangle_II:杨辉三角II
//https ://leetcode-cn.com/problems/pascals-triangle-ii/submissions/
//给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。
//在杨辉三角中，每个数是它左上方和右上方的数的和。
//示例 :
//输入 : 3
//输出 : [1, 3, 3, 1]
//进阶：
//	 你可以优化你的算法到 O(k) 空间复杂度吗？

class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> rows(rowIndex + 1, 1);
		for (int i = 0; i <= rowIndex; ++i){
			for (int j = i - 1; j > 0; --j){
				rows[j] += rows[j - 1];
			}
		}
		return rows;
	}
};