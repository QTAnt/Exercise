//Word_inversion：单词倒排
//【题目解析】：
//这个问题是包含了字符串常见操作的 切分 和 合并 虽然曾经 C 语言课上讲过类似的问题, 但是这个问题的变
//化是对单词分割符不设限制, 只要非字母, 都需要当成分割符, 并且分割符的数目不受限制.
//【解题思路】：
//我们整体的思路仍然是
//1. 先切分(切分前先对分割符做处理, 统一分割符), 此时可以使用 stringstream 进行切分
//2. 再合并(对切分结果逆序合并) 直接字符串拼接合并即可

#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
void deal(vector<string>&res, string& str, char delim = ' ') {
	// 对字符串进行切分, 借助 stringstream 完成. 默认分割符是空格.
	// stringstream 不光能完成切分, 还能完成字符串和数字之间的转换.
	stringstream ss;
	ss << str;
	string tmp;
	while (ss >> tmp) {
		res.push_back(tmp);
	}
} 
int main() {
	string str;
	while (getline(cin, str)) {
		vector<string> res;
		for (int i = 0; i < str.size(); i++)
			// 先对分割符进行处理. 如果发现分割符, 就统一处理成空格.
		if (!isalnum(str[i]))
			str[i] = ' ';
		// 对字符串进行切分
		deal(res, str);
		cout << res[res.size() - 1];
		for (int i = res.size() - 2; i >= 0; i--)
			cout << " " << res[i];
		cout << endl;
	} 
	return 0;
}