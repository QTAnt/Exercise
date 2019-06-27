//Yang_Hui_Triangle：杨辉三角
//https ://leetcode-cn.com/problems/pascals-triangle/submissions/
//给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
//在杨辉三角中，每个数是它左上方和右上方的数的和。
//示例 :
//输入 : 5
//输出 :
//   [
//	   [1],
//	   [1, 1],
//	   [1, 2, 1],
//	   [1, 3, 3, 1],
//	   [1, 4, 6, 4, 1]
//   ]

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>>result;
		if (numRows == 0)
			return result;
		result.push_back(vector<int>(1, 1));
		if (numRows == 1)
			return result;
		result.push_back(vector<int>(2, 1));
		if (numRows == 2)
			return result;
		for (int i = 2; i<numRows; i++)
		{
			vector<int>res(i + 1, 1);
			for (int j = 1; j<i; j++)
				res[j] = result[i - 1][j - 1] + result[i - 1][j];
			result.push_back(res);
		}
		return result;
	}
};