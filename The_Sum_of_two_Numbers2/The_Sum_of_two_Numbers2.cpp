//<2>�����ϣ��1.�÷�����mapʵ�֣�map��STL��һ������������
���ṩһ��һ�����е�һ�����Գ�Ϊ�ؼ��֣�ÿ���ؼ���ֻ����map�г���һ�Σ�
�ڶ������ܳ�Ϊ�ùؼ��ֵ�ֵ�������ݴ�������

#include <iostream>
#include <vector>
#include "map"

using namespace std;
void TwoSum(vector<int>& num, int target){
	//��vector�����Ϣ������map��
	map <int, int>map;    //key��Ԫ�ص�ֵ,value���±�
	for (int i = 0; i < num.size() - 1; i++){
		map[num[i]] = i;
	}

	vector<int> res;
	for (int i = 0; i < num.size(); i++){
		auto it = map.find(target - num[i]);   //Ѱ����Ŀ��ֵ�Ĳ��ֵ
		//���û�ҵ��Ļ����ͷ���map.end();����ҵ��˵Ļ����Ͳ��᷵��map.end()����˲���map.end()�Ļ�������ʾ�ҵ��� 
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


//<3>һ���ϣ��
//�Ľ����ڽ��е�������Ԫ�ز��뵽���е�ͬʱ�����ǻ���ع�ͷ���������Ƿ��Ѿ����ڵ�ǰԪ������Ӧ��Ŀ��Ԫ�ء���������ڣ��������Ѿ��ҵ��˶�Ӧ�⣬���������䷵�ء�

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> a;//�ṩһ��һ��hash
		vector<int> b(2, -1);//�������ؽ������ʼ��һ����СΪ2��ֵΪ-1������b
		for (int i = 0; i<nums.size(); i++)
		{
			if (a.count(target - nums[i])>0)
			{
				b[0] = a[target - nums[i]];
				b[1] = i;
				break;
			}
			a[nums[i]] = i;//����������map�У�������ȡ����±�
		}
		return b;
	};
};
