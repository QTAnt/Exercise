//<2>两遍哈希：1.该方法用map实现，map是STL的一个关联容器，
它提供一对一（其中第一个可以称为关键字，每个关键字只能在map中出现一次，
第二个可能称为该关键字的值）的数据处理能力

#include <iostream>
#include <vector>
#include "map"

using namespace std;
void TwoSum(vector<int>& num, int target){
	//把vector里的信息保存在map里
	map <int, int>map;    //key存元素的值,value存下标
	for (int i = 0; i < num.size() - 1; i++){
		map[num[i]] = i;
	}

	vector<int> res;
	for (int i = 0; i < num.size(); i++){
		auto it = map.find(target - num[i]);   //寻找与目标值的差的值
		//如果没找到的话，就返回map.end();如果找到了的话，就不会返回map.end()；因此不是map.end()的话，即表示找到了 
		if (it != map.end() && it->second != i){
			cout << it->second << " ";
			cout << i << " ";
			break;
		}
	}
}


int main()
{
	int arr[] = { 1, 3, 7, 8, 2, 5, 6, 10 };
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	TwoSum(v, 9);
	system("pause");
	return 0;
}


//<3>一遍哈希表
//改进：在进行迭代并将元素插入到表中的同时，我们还会回过头来检查表中是否已经存在当前元素所对应的目标元素。如果它存在，那我们已经找到了对应解，并立即将其返回。

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> a;//提供一对一的hash
		vector<int> b(2, -1);//用来承载结果，初始化一个大小为2，值为-1的容器b
		for (int i = 0; i<nums.size(); i++)
		{
			if (a.count(target - nums[i])>0)
			{
				b[0] = a[target - nums[i]];
				b[1] = i;
				break;
			}
			a[nums[i]] = i;//反过来放入map中，用来获取结果下标
		}
		return b;
	};
};
