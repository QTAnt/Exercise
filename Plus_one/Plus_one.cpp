Plus_one：加一
https ://translate.google.cn/#view=home&op=translate&sl=auto&tl=en&text=%E5%8A%A0%E4%B8%80

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		//按一般的逻辑来解，先直接在尾部加一
		digits[digits.size() - 1] += 1;
		for (int i = digits.size() - 1; i >= 0; i--)  //再开始判断数组里面的值，从低位向高位开始判断
		{
			if (digits[i] == 10)  //假如加一为10，那么要进位，分2种情况
			{
				if (i == 0)  //1.如果它是首位那么就要进位变成10 如[9] [1,0]
				{
					digits[i] = 1;
					digits.push_back(0);
				}
				else  //2.不是首位，则该位变0，前面一位加一
				{
					digits[i] = 0;
					digits[i - 1] += 1;
				}
			}
		}
		return digits;
	}
};