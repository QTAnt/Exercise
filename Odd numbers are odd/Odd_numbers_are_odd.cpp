//[����λ�϶�����������ż��λ�϶���ż��](https://www.nowcoder.com/questionTerminal/b89b14a3b5a94e438b518311c5156366)
//����һ�����Ȳ�С��2������arr�� дһ����������arr��ʹarr��Ҫô���е�ż��λ�϶���ż����Ҫô���е�����λ�϶��������ϡ� Ҫ��������鳤��ΪN��ʱ�临�Ӷ���ﵽO(N)������ռ临�Ӷ���ﵽO(1), �±�0, 2, 4, 6...����ż��λ, �±�1, 3, 5, 7...��������λ������[1, 2, 3, 4]����Ϊ[2, 1, 4, 3]����

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	/**
	*  ����λ�϶�����������ż��λ�϶���ż��
	*  ���룺����arr�����ȴ���2
	*  len��arr�ĳ���
	*  ��arr����������λ�϶�����������ż��λ�϶���ż��
	*/
	void oddInOddEvenInEven(vector<int>& arr, int len) {
		int i = 0, j = 1;
		//ÿ�������һ��Ԫ�رȽϣ����Ϊ��������������λ�Ͻ������±�+2,���Ϊż����
		//ͬ����żλ�ϵ�����������
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

