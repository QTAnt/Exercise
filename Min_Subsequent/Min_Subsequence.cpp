#include <iostream>
using namespace std;

int main()
{
	int n;
	int arr[1000] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		arr[i] = k;
	}

	int Sum = 0;
	int Min_Sum = 0;
	for (auto e : arr)
	{
		Sum += e;
		if (Sum < Min_Sum)
			Min_Sum = Sum;
		else if (Sum > 0)
			Sum = 0;     //��С�����еĵ�һ������Ϊ����
	}
	cout << Min_Sum << endl;

	system("pause");
	return 0;
}