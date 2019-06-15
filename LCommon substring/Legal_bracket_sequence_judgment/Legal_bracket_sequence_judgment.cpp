//[Legal_bracket_sequence_judgment：合法括号序列判断](https://www.nowcoder.com/practice/d8acfa0619814b2d98f12c071aef20d4?tpId=8&&tqId=11039&rp=1&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking)
//题目描述对于一个字符串，请设计一个算法，判断其是否为一个合法的括号串。给定一个字符串A和它的长度n，请返回一个bool值代表它是否为一个合法的括号串。测试样例：
//"(()())", 6返回：true测试样例：
//"()a()()", 7返回：false测试样例：
//"()(()()", 7返回：false
//
//用栈结构实现，栈中存放左括号，当遇到右括号之后，检查栈中是否有左括号，如果有则出栈，如果没有，则说明不匹配。

class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		vector<char> v;
		for (int i = 0; i < n; i++) {
			if (A.at(i) == '(') {
				v.push_back(A.at(i));
			}
			else {
				if (v.size()) {
					if (A.at(i) == ')') {
						v.pop_back();
					}
				}
				else {
					return false;
				}
			}
		}
		if (v.size()) {
			return false;
		}
		else {
			return true;
		}
	}
};