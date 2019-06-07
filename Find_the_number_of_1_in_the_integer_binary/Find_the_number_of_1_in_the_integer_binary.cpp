//Find_the_number_of_1_in_the_integer_binary：查找整数二进制中1 的个数
//https ://www.nowcoder.com/practice/1b46eb4cf3fa49b9965ac3c2c1caf5ad?tpId
//题目描述
//请实现如下接口
//public   static   int  findNumberOf1(int num)
//{
//	/*  请实现  */
//	return  0;
//} 譬如：输入5 ，5的二进制为101，输出2
//涉及知识点：
//输入描述 :
//输入一个整数
//输出描述 :
//计算整数二进制中1的个数
//示例1
//输入
//复制
//5
//输出
//复制
//2

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
	} return 0;
}