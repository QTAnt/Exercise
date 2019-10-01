//The_Sum_of_two_Numbers:两数之和
//https://leetcode-cn.com/problems/two-sum/submissions/
//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
//你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
//示例 :
//给定 nums = [2, 7, 11, 15], target = 9
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回[0, 1]

////<1>暴力法：该方法简单但是时间复杂度为O(n^2),空间复杂度为O(1);运行速度慢且内存空间消耗大
#include <iostream>
#include <vector>

using namespace std;

void TwoSum(vector<int>& num, int target)    //数组，目标值
{
	int i, j;
	for (i = 0; i < num.size() - 1; i++){        //nums.size() 获取向量元素个数
		for (j = i + 1; j < num.size() - 1; j++){
			if (num[i] + num[j] == target){
				//cout << i << " "<< j << endl;        //返回所有符合要求的数下标
				cout << num[i] << " " << num[j] << endl;   //返回所有符合要求的两个数
				//return;    //如果要求只要找到一组数即可，就可直接返回	
			}	
		}
	}
}

int main()
{
	//vector初始化1
	//int arr[] = { 1, 3, 7, 8, 2, 5, 6, 10 };
	//vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));

	//vector初始化2
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(7);
	v.push_back(8);
	v.push_back(2);
	v.push_back(5);
	v.push_back(6);
	v.push_back(10);
	TwoSum(v,9);
	system("pause");
	return 0;
}

