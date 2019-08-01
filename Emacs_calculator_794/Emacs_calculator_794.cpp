//Emacs_calculator_794：Emacs计算器
//https ://www.nowcoder.com/questionTerminal/1a92fbc771a54feb9eb5bd9b3ff2d0a9
//题目解析】
//逆波兰表达式(后缀表达式)求值，需要借助栈，具体参见解题思路
//【解题思路】
//循环输入，获取逆波兰表达式，然后进行以下补助，直到测试完所有的测试用例：
//1. 遇到数字字符串，将该数字字符串转化为数字然后入栈。
//2. 遇到操作符时，从栈顶取两个数字，然后进行该运算符所对应运算，完成好将结果入栈，注意：先取到
//的数字为运算符的右操作数。
//3. 继续1和2，直到处理完所有的字符串，最终栈顶元素即为所要结果

#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n;
	int a, b, ret;
	while (cin >> n){
		if (n == 0)
			continue;
		vector<string> s(n);
		stack<int> st;
		for (int i = 0; i<n; i++){
			cin >> s[i];
		} 
			for(int i = 0; i<n; i++){
				if (s[i][0] >= '0'&&s[i][0] <= '9'){
					st.push(atoi(s[i].data()));
				} 
				else{
					a = st.top();
					st.pop();
					b = st.top();
					st.pop();
					switch (s[i][0]){
					case '+': st.push(a + b); break;
					case '-': st.push(b - a); break;
					case '*': st.push(a*b); break;
					case '/': st.push(b / a); break;
					}
				}
			} 
			cout << st.top() << endl;
	} 
		return 0;
}
