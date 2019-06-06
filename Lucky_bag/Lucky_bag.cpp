//[Lucky_bag：幸运的袋子](https://www.nowcoder.com/practice/a5190a7c3ec045ce9273beebdfe029ee?tpId)
//题目描述
//一个袋子里面有n个球，每个球上面都有一个号码(拥有相同号码的球是无区别的)。如果一个袋子是幸运的当且仅当所有球的号码的和大于所有球的号码的积。
//例如：
//如果袋子里面的球的号码是{ 1, 1, 2, 3 }，这个袋子就是幸运的，因为1 + 1 + 2 + 3 > 1 * 1 * 2 * 3
//你可以适当从袋子里移除一些球(可以移除0个, 但是别移除完)，要使移除后的袋子是幸运的。现在让你编程计算一下你可以获得的多少种不同的幸运的袋子。
//输入描述 :
//第一行输入一个正整数n(n ≤ 1000)
//第二行为n个数正整数xi(xi ≤ 1000)输出描述 : 输出可以产生的幸运的袋子数
//
//示例1
//输入3
//1 1 1
//输出2

#include <iostream>
#include <algorithm>

using namespace std;

int n, a[1007];
int DFS(int step, int sum, int mul)
{
	int r = 0;
	for (int i = step + 1; i<n; i++)
	{
		int S = sum + a[i];
		int M = mul*a[i];
		if (S > M)
			r += 1 + DFS(i, S, M);
		else if (a[i] == 1)
			r += DFS(i, S, M);
		else
			break;
		while (i<n - 1 && a[i] == a[i + 1])
			i++;
	}
	return r;
}

int main()
{
	cin >> n;
	for (int i = 0; i<n; i++)
		cin >> a[i];
	sort(a, a + n);
	cout << DFS(0, 1, 1) << endl;
	return 0;
}
