//Number_of_occurrences_in_the_array_that_exceeds_half�������г��ִ�������һ�������
//������˼·����
//������ع��ص�˼�룺 ��һ��������Ϊ��һ��ʿ��������أ�count = 1�� ������ͬԪ�أ�count++; ������
//��ͬԪ�أ���Ϊ���ˣ�ͬ���ھ�, count--��������countΪ0������������µ�iֵ��Ϊ����ص�ʿ����������
//ȥ���������������ϵ�ʿ�����п�������Ԫ�ء� ��Ϊ��Ԫ����Ŀ���������������һ��, �����������
//���ǲ��ܰ������ָ���Ϊ 0 ��.�ټ�һ��ѭ������¼���ʿ���ĸ������Ƿ��������һ�㼴��

class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int n = numbers.size();
		if (n == 0) return 0;
		int num = numbers[0], count = 1;
		for (int i = 1; i < n; i++) {
			if (numbers[i] == num) {
				count++;
			}
			else {
				count--;
			} 
			   if(count == 0) {
					num = numbers[i];
					count = 1;
				}
		} 
			// ��������Ĳ���, �Ѿ��ҵ����� num ��.
			// ����Ĳ�����Ϊ��ȷ�� num ȷʵ�ǳ��ִ�������һ��.
			count = 0;
		for (int i = 0; i < n; i++) {
			if (numbers[i] == num) 
					count++;
		} 
		if(count * 2 > n) 
			return num;
		return 0;
	}
};