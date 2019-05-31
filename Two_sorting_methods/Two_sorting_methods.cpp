//[Two_sorting_methods���������򷽷�](https://www.nowcoder.com/practice/839f681bf36c486fbcc5fcb977ffe432?tpId)
//��Ŀ����
//������n���ַ����ַ��������������ַ������ȶ��ǲ�ͬ�ġ��������ѧϰ���������ַ��������򷽷��� 1.�����ַ������ֵ����������磺
//"car" < "carriage" < "cats" < "doggies < "koala"
//2.�����ַ����ĳ����������磺
//"car" < "cats" < "koala" < "doggies" < "carriage"
//������֪���Լ�����Щ�ַ�������˳���Ƿ��������������򷽷�������Ҫæ�ų���Ҷ��������Ҫ������æ��֤��
//�������� : �����һ��Ϊ�ַ�������n(n �� 100)
//	   ��������n��, ÿ��һ���ַ���, �ַ������Ⱦ�С��100������Сд��ĸ���������� : �����Щ�ַ����Ǹ����ֵ������ж����Ǹ��ݳ����������"lexicographically",
//	   ������ݳ������ж������ֵ����������"lengths",
//	   ������ַ�ʽ���������"both"���������"none"ʾ��1
//����3
//a
//aa
//bbb
//���both

#include<string>
#include<iostream>
#include<algorithm>
	   using namespace std;
bool cmp(string a, string b){
	return a.length()<b.length();
}
bool equal(string a[], string b[], int N){
	for (int i = 0; i<N; i++)
	if (a[i] != b[i]) return false;
	return true;
}
string a[105], b[105], c[105];
int main(){
	int i, n;
	for (cin >> n, i = 0; i<n; i++) cin >> a[i], b[i] = c[i] = a[i];
	sort(b, b + n), sort(c, c + n, cmp);
	if (equal(a, b, n) && equal(a, c, n)) printf("both");
	if (equal(a, b, n) && (!equal(a, c, n))) printf("lexicographically");
	if ((!equal(a, b, n)) && equal(a, c, n)) printf("lengths");
	if ((!equal(a, b, n)) && (!equal(a, c, n))) printf("none");
}

