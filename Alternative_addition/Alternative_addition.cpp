//[Alternative_addition:另类加法](https ://www.nowcoder.com/practice/e7e0d226f1e84ba7ab8b28efc6e1aebc?tpId)
//	请编写一个函数，将两个数字相加。不得使用 + 或其他算数运算符。给定两个int A和B。请返回A＋B的值; 测试样例： 1, 2返回：3

class UnusualAdd {
public:
	int addAB(int A, int B) {
		int sum = 0, carry = 0;
		while (B != 0){
			//对应位的和
			sum = A^B;
			//对应位和的进位，既然是进位，就要整体左移一位
			carry = (A&B) << 1;
			A = sum;
			B = carry;
		}
		return sum;
	}
};
					