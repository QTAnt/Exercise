//[The even number of the nearest prime numbers：最接近的素数组成的偶数](https://www.nowcoder.com/practice/f8538f9ae3f1484fb137789dec6eedb9?tpId)
//题目描述
//任意一个偶数（大于2）都可以由2个素数组成，组成偶数的2个素数有很多种情况，本题目要求输出组成指定偶数的两个素数差值最小的素数对
//输入描述 : 输入一个偶数输出描述 : 输出两个素数示例1
//输入 20
//输出 7 13
	   
#include <iostream>
#include <algorithm>
	   using namespace std;

//判断素数
bool IsPrime(int n)
{
	int cur = sqrt(n);  //中间值，开方
	for (int i = 2; i <= cur; i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;//输入的数
	int mid; //n偏中间的数
	int j;
	while (cin >> n)
	{
		mid = n / 2;
		//从中间往两边找
		for (j = mid; j > 0; j--)
		{
			if (IsPrime(j) && IsPrime(n - j))
				break;
		}
		cout << j << endl;
		cout << n - j << endl;
	}
	return 0;
}
