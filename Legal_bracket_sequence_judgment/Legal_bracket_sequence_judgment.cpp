//[Legal_bracket_sequence_judgment���Ϸ����������ж�](https://www.nowcoder.com/practice/d8acfa0619814b2d98f12c071aef20d4?tpId=8&&tqId=11039&rp=1&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking)
//��Ŀ��������һ���ַ����������һ���㷨���ж����Ƿ�Ϊһ���Ϸ������Ŵ�������һ���ַ���A�����ĳ���n���뷵��һ��boolֵ�������Ƿ�Ϊһ���Ϸ������Ŵ�������������
//"(()())", 6���أ�true����������
//"()a()()", 7���أ�false����������
//"()(()()", 7���أ�false
//
//��ջ�ṹʵ�֣�ջ�д�������ţ�������������֮�󣬼��ջ���Ƿ��������ţ���������ջ�����û�У���˵����ƥ�䡣

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