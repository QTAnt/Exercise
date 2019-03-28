//���������ַ���a, b�е�������Ӵ������ж��������ڽ϶̴������ȳ��ֵ��Ǹ�

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void MaxCommonStr(string s1, string s2)
{
	//s1����϶̵��Ӵ�  
	if (s1.length()>s2.length())
		swap(s1, s2);

	int L1 = s1.length(), L2= s2.length();
	int maxL = 0, start = 0;

	vector<vector<int> >dp(L1 + 1, vector<int>(L2 + 1, 0));
	for (int i = 1; i <= L1; ++i)
	for (int j = 1; j <= L2; ++j)
	{
		if (s1[i - 1] == s2[j - 1])
		{
			dp[i][j] = dp[i - 1][j - 1] + 1;
			if (dp[i][j]>maxL)
			{
				maxL = dp[i][j];
				start = i - maxL;//��¼������Ӵ�����ʼλ��                
			}
		}
	}
	cout << s1.substr(start, maxL) << endl;
}


int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		MaxCommonStr(s1, s2);
	}
	return 0;
}