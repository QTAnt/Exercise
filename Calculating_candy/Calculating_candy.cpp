//[Calculating_candy�������ǹ�](% 3Ca href = "https://www.nowcoder.com/cts/16754304/summary?id=1DB246492601FF37#4/{%22uid%22%3A%221DB246492601FF37%22%2C%22type%22%3A%224%22%2C%22index%22%3A0}"%3Ehttps://www.nowcoder.com/cts/16754304/summary?id=1DB246492601FF37#4/{%22uid%22%3A%221DB246492601FF37%22%2C%22type%22%3A%224%22%2C%22index%22%3A0}%3C/a%3E)
//����Ŀ����
//A��B��C�������Ǻ����ѣ�ÿ�������ﶼ��һЩ�ǹ������ǲ�֪������ÿ�������Ͼ����ж��ٸ��ǹ�����������֪�����µ���Ϣ��
//A - B��B - C��A + B��B + C.���ĸ���ֵ.ÿ����ĸ����ÿ������ӵ�е��ǹ���.������Ҫͨ�����ĸ���ֵ�����ÿ���������ж��ٸ��ǹ�����A��B��C�����ﱣ֤���ֻ��һ������A��B��C������������������
//����������
//����Ϊһ�У�һ��4���������ֱ�ΪA - B��B - C��A + B��B + c���ÿո��������Χ���� - 30��30֮�䣨�����䣩��
//���������
//���Ϊһ�У�����������������a��B��c��˳�����A��B��c���ÿո��������ĩ�޿ո����������������������B��c�������N��
//ʾ��1�������ʾ���������ԣ���̨��������һ�㲻����ʾ��
//����
//1 - 234

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int A = (a + c) / 2;
	int C = (d - b) / 2;
	int B1 = (b + d) / 2;
	int B2 = (c - a) / 2;
	if (B1 == B2)
		cout << A << " " << B1 << " " << C;
	else
		cout << "No";
	return 0;
}