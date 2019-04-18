//[输入描述:输入一个整数输出描述 : 计算整数二进制中1的个数](https://www.nowcoder.com/practice/1b46eb4cf3fa49b9965ac3c2c1caf5ad?tpId=37&&tqId=21285&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking)
//
//请实现如下接口     
//public   static   int  findNumberOf1(int num)    { return  0; }
//譬如：输入5 ，5的二进制为101，输出2 


#include<iostream>
using namespace std;
int main(){
	int n;
	while (cin >> n)
	{
		int count = 0;
		while (n)
		{
			if ((n & 1) == 1)
				count += 1;
			n >>= 1;
		}
		cout << count << endl;
	}
	return 0;
}


