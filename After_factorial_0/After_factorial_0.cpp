//After_factorial_0：阶乘后的零
//https ://translate.google.cn/#view=home&op=translate&sl=auto&tl=en&text=%E9%98%B6%E4%B9%98%E5%90%8E%E7%9A%84
//
//给定一个整数 n，返回 n!结果尾数中零的数量。
//示例 1 :
//输入 : 3
//输出 : 0
// 解释 : 3!= 6, 尾数中没有零。
//示例 2 :
//输入 : 5
//输出 : 1
//解释 : 5!= 120, 尾数中有 1 个零.
//说明 : 你算法的时间复杂度应为 O(log n) 。


class Solution {
public:
	//因为是阶乘后的0
	//0是由于2*5得出一个0
	//因此便是求2*5有多少个
	//因为2<5
	//有5一定有2
	//因此便是求5的个数
	int trailingZeroes(int n) {
		int sum = 0;
		while (n>4)
		{
			sum = sum + n / 5;
			n = n / 5;
		}
		return sum;
	}
};