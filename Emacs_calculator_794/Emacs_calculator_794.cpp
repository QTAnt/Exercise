//Emacs_calculator_794��Emacs������
//https ://www.nowcoder.com/questionTerminal/1a92fbc771a54feb9eb5bd9b3ff2d0a9
//��Ŀ������
//�沨�����ʽ(��׺���ʽ)��ֵ����Ҫ����ջ������μ�����˼·
//������˼·��
//ѭ�����룬��ȡ�沨�����ʽ��Ȼ��������²�����ֱ�����������еĲ���������
//1. ���������ַ��������������ַ���ת��Ϊ����Ȼ����ջ��
//2. ����������ʱ����ջ��ȡ�������֣�Ȼ����и����������Ӧ���㣬��ɺý������ջ��ע�⣺��ȡ��
//������Ϊ��������Ҳ�������
//3. ����1��2��ֱ�����������е��ַ���������ջ��Ԫ�ؼ�Ϊ��Ҫ���

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
