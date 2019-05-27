//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//void R()
//{
//	string s;
//	string A("0123456789abcdefghijklmn");
//	int M;
//	int N;
//	cin >> M >> N;
//
//	int flag = 1;
//	if (M < 0)
//	{
//		flag = 0;
//		M = -M;
//	}
//	while (M)
//	{
//		s += A[M%N];
//		M /= N;
//	}
//	if (flag == 0)
//	{
//		s += '-';
//	}
//	reverse(s.begin(), s.end());
//	cout << s << endl;
//}
//
//int main()
//{
//	R();
//	system("pause");
//	return 0;
//}

//#include <stdlib.h>
//#include <iostream>
//#include <string>
//
//using namespace std;
////typedef uint8_t;
//
//const static char A = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n'};
//static uint8_t R()
//{
//
//	string s;
//	string A("0123456789abcdefghijklmn");
//	uint8_t cur = 0;
//	uint8_t i = 0;
//	for (uint8_t count = 0; count < 2; count++)
//	{
//		for (i = 0; i < 24; i++)
//		{
//			if (s[count] == A[i])
//			{
//				if (count == 0)
//				{
//					cur = i * 24 + cur;
//				}
//				else if (count == 1)
//				{
//					cur = i + cur;
//				}
//				break;
//			}
//		}
//		if (i >= 24)
//		{
//			return ;
//		}
//	}
//	return cur;
//}
//
//int main()
//{
//	R();
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void reverse_string(string &s)
{
	int T;
	int L = s.length();
	char c;
	for (int i = 0; i < L / 2; i++)
	{
		c = s[i];
		s[i] = s[L - i - 1];
		s[L - i - 1] = c;
	}
}
int main()
{
	string s;
	getline(cin, s);
	reverse_string(s);
	cout << s << endl;
	system("pause");
	return 0;
}



//
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		char c;
//		for (int i = 0; i < s.length() / 2; i++)
//		{
//			c = s[i];
//			s[i] = s[s.length() - i - 1];
//			s[s.length() - i - 1] = c;
//		}
//		reverse_string(s);
//	}
//	cout << s << endl;
//	return 0;
//}
//
