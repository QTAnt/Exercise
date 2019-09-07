//证券股票价格时时刻都在起伏不定，变幻莫测，如何保证得到最高收益是每个投资人最终追求，现在模拟给定一个数组，  它的第i个元素是一支给定股票第i天的价格。如果你最多只允许完成一笔交易(即买入和卖出一支股票)，设计一个算法来计算你所能获取的最大利润。
//输入：输入一个数组，里面包含整形数字，用来模拟价格的起伏。
//输出：算出价格区间内的最高收益，如果没有收益, 则按照0计算
//样例输入：[7, 1, 4.3, 1]
//样例输出：3
//AC：50%
#include <iostream>
#include <vector>
#include <string>
using namespace std;
	
int Max(vector<int>& v, int n){
	
	int p, tmp = 0;
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			p = v[j] - v[i];
			if (p > tmp)
				n = p;
		}
	}
	return n;
}

int main(){
	string s;
	cin >> s;
	vector<int> p;
	for (size_t i = 1; i < s.size(); i++){
		string cur = "";
		size_t end = i;
		while (end < s.size() && s[end] != ',' && s[end] != '['&& s[end] != ']'){
			cur = cur + s[end];
			end++;
		}
		int num = 0;
		i = end;
		num = atoi(cur.c_str());
		p.push_back(num);
	}
	cout << Max(p, p.size()) << endl;
	return 0;
}