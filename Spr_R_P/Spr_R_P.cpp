//
//�����ڼ�С��ʹ��΢���յ��ܶ��������ǳ����ġ��ڲ鿴��ȡ�����¼ʱ���֣�ĳ����������ֵĴ��������˺��������һ�롣���С���ҵ��ú����д�������㷨˼·�ʹ���ʵ�֣�Ҫ���㷨�����ܸ�Ч��
//����һ������Ľ������gifts�����Ĵ�Сn���뷵���������Ľ�
//��û�н���������һ�룬����0��
//����������
//[1, 2, 3, 2, 2], 5
//���أ�2

class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		// write code here
		map<int, int> arr;
		for (int i = 0; i < n; i++)
		{
			arr.insert(make_pair(gifts[i], 0));
		}
		for (int i = 0; i < n; i++)
		{
			for (auto &e : arr)
			{
				if (e.first == gifts[i])
				{
					e.second++;
					break;
				}
			}
		}
		for (auto e : arr)
		{
			if (e.second > n / 2)
			{

				return e.first;
			}
		}
		return 0;
	}
};