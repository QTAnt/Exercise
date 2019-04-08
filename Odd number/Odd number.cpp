//https://www.nowcoder.com/questionTerminal/b89b14a3b5a94e438b518311c5156366
//奇数位上都是奇数或者偶数位上都是偶数
//给定一个长度不小于2的数组arr。 写一个函数调整arr，使arr中要么所有的偶数位上都是偶数，要么所有的奇数位上都是奇数上。 要求：如果数组长度为N，时间复杂度请达到O(N)，额外空间复杂度请达到O(1), 下标0, 2, 4, 6...算作偶数位, 下标1, 3, 5, 7...算作奇数位，例如[1, 2, 3, 4]调整为[2, 1, 4, 3]即可


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	/**
	*  奇数位上都是奇数或者偶数位上都是偶数
	*  输入：数组arr，长度大于2
	*  len：arr的长度
	*  将arr调整成奇数位上都是奇数或者偶数位上都是偶数
	*/
	void oddInOddEvenInEven(vector<int>& arr, int len) {
		int i = 0, j = 1;
		//每次与最后一个元素比较，如果为奇数；如果为偶数，则与偶数位上交换，下标+2。同理奇偶位上的数依次填入
		while (i<len && j<len)
		{
			if (arr[len - 1] % 2 == 0)
			{
				swap(arr[len - 1], arr[i]);
				i += 2;
			}
			else
			{
				swap(arr[len - 1], arr[j]);
				j += 2;
			}
		}
	}
};