//Number_of_occurrences_greater_than_or_equal_to_n / 2_in_n_numbers:n��������ִ������ڵ���n / 2����
//https ://www.nowcoder.com/practice/eac8c671a0c345b38aa0c07aba40097b?tpId=85&&tqId=29866&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking

#include<iostream>
using namespace std;
int main(){
	int a[1000] = { 0 };//������0��Ȼ������n�����Ӧλ�ü�1������������
	int n, num = 0;  //�ҵ����ڵ���һ��������Ǹ�
	while (cin >> n){
		a[n]++;
		num++;
	}
	for (int i = 0; i<num; i++){
		if (a[i] >= num / 2)
			cout << i << endl;
	}
	return 0;
}