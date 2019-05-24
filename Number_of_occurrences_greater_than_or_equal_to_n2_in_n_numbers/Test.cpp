//Number_of_occurrences_greater_than_or_equal_to_n / 2_in_n_numbers:n个数里出现次数大于等于n / 2的数
//https ://www.nowcoder.com/practice/eac8c671a0c345b38aa0c07aba40097b?tpId=85&&tqId=29866&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking

#include<iostream>
using namespace std;
int main(){
	int a[1000] = { 0 };//数组置0，然后输入n，则对应位置加1，最后遍历数组
	int n, num = 0;  //找到大于等于一半次数的那个
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