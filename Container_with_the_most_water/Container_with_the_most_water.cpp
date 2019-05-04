//Container_with_the_most_water 
//https ://leetcode-cn.com/problems/container-with-most-water/submissions/
//给定 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点(i, ai) 。在坐标内画 n 条垂直线，垂直线 i 的两个端点分别为(i, ai) 和(i, 0)。找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
//说明：你不能倾斜容器，且 n 的值至少为 2。

class Solution {
public:
	int maxArea(vector<int>& height) {
		if (height.size() <= 1) return -1;
		int i = 0, j = height.size() - 1, res = 0;
		while (i < j){
			int h = min(height[i], height[j]);
			res = max(res, h * (j - i));
			if (height[i] < height[j]) ++i;
			else --j;
		}
		return res;
	}
};