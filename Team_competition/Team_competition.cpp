//[Team_competition：组队竞赛](https://www.nowcoder.com/cts/16710229/summary?id=3A7399510717A8FD#4/{%22uid%22%3A%223A7399510717A8FD%22%2C%22type%22%3A%224%22%2C%22index%22%3A0})
//【题目解析】：
//队伍的水平值等于该队伍队员中第二高水平值，为了所有队伍的水平值总和最大的解法，也就是说每个队伍的第二个值是尽可能大的值。所以实际值把最大值放到最右边，最小是放到最左边。
//【解题思路】：
//本题的主要思路是贪心算法，贪心算法其实很简单，就是每次选值时都选当前能看到的局部最解忧，所以这里的贪心就是保证每组的第二个值取到能选择的最大值就可以，我们每次尽量取最大，但是最大的数不可能是中位数，所以退而求其次，取 每组中第二大的排序，然后取下标为3n - 2，3n - 4 ，3n - 4...n + 2，n位置的元素累加即可，相当下标为[0, n - 1]的n个数做每组的最左边的数，剩下的2个数据两个为一组，大的值做最右边的数，次大的做中间值，这里就是把这个次大的值加起来。
//例如 现在排序后 有 1 2 5 5 8 9 ，那么取 8 和 5相加等于 13

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	long long sum = 0;
	while (cin >> n)
	{
		vector<int> v(3 * n);
		for (int i = 0; i < 3 * n; ++i)
		{
			cin >> v[i];
		}
		std::sort(v.begin(), v.end());
		for (int i = n; i <= 3 * n - 2; i += 2)
		{
			sum += v[i];
		}
		cout << sum << endl;
	}
	return 0;
}
