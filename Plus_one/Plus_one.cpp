Plus_one����һ
https ://translate.google.cn/#view=home&op=translate&sl=auto&tl=en&text=%E5%8A%A0%E4%B8%80

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		//��һ����߼����⣬��ֱ����β����һ
		digits[digits.size() - 1] += 1;
		for (int i = digits.size() - 1; i >= 0; i--)  //�ٿ�ʼ�ж����������ֵ���ӵ�λ���λ��ʼ�ж�
		{
			if (digits[i] == 10)  //�����һΪ10����ôҪ��λ����2�����
			{
				if (i == 0)  //1.���������λ��ô��Ҫ��λ���10 ��[9] [1,0]
				{
					digits[i] = 1;
					digits.push_back(0);
				}
				else  //2.������λ�����λ��0��ǰ��һλ��һ
				{
					digits[i] = 0;
					digits[i - 1] += 1;
				}
			}
		}
		return digits;
	}
};