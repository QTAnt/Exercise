//Effective_():��Ч������
//https://leetcode-cn.com/problems/valid-parentheses/
//
//����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ������ж��ַ����Ƿ���Ч��
//��Ч�ַ��������㣺
//�����ű�������ͬ���͵������űպϡ�
//�����ű�������ȷ��˳��պϡ�
//ע����ַ����ɱ���Ϊ����Ч�ַ�����
//ʾ�� 1:
//���� : "()"
//��� : true
//ʾ�� 2 :
//���� : "()[]{}"
//��� : true
//ʾ�� 3 :
//���� : "(]"
//��� : false
//ʾ�� 4 :
//���� : "([)]"
//��� : false
//ʾ�� 5 :
//���� : "{[]}"
//��� : true

class Solution {
public:
	bool isValid(string s) {
		stack<char> stk;
		for (char c : s) {
			if (stk.empty()) {
				stk.push(c);
			}
			else if (match(stk.top(), c)) {
				stk.pop();
			}
			else {
				stk.push(c);
			}
		}
		return stk.empty();
	}
	bool match(char lhs, char rhs) {
		return ((lhs == '('&&rhs == ')') || (lhs == '['&&rhs == ']') || (lhs == '{'&&rhs == '}'));
	}
};