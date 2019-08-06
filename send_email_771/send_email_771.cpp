//send_email_771：发邮件
//https ://www.nowcoder.com/questionTerminal/95e35e7f6ad34821bc2958e37c08918b
//【题目解析】
//经典的装错信封问题，该题目的核心在于递归的思想，具体参见解题思路。
//【解题思路】
//用A、B、C……表示写着ｎ位友人名字的信封，a、b、c……表示ｎ份相应的写好的信纸。
//把错装的总数为记作Der(n)。假设把ａ错装进Ｂ里了，包含着这个错误的一切错装法分两类：
//1. b装入Ａ里，这时每种错装的其余部分都与A、B、a、b无关，应有Der(n－2)种错装法。
//2. ｂ装入A、B之外的一个信封，这时的装信工作实际是把（除a之外的）n－1份信纸ｂ、ｃ……装入（除
//B以外的）n－1个信封A、C……，显然这时装错的方法有Der(n－1)种。
//总之在ａ装入B的错误之下，共有错装法Der(n－2)＋Der(n－1)种。
//a装入C，装入Der……的n－2种错误之下，同样都有Der(n－1)＋Der(n－2)种错装法，因此Der(n)＝(n－1)
//[Der(n－1)＋Der(n－2)]

#include<stdio.h>
int main(void)
{
	long long der[21] = { 0, 0, 1 };
	int i;
	for (i = 3; i < 21; i++){
		der[i] = (i - 1) * (der[i - 2] + der[i - 1]);
	} 
		int n;
	while (scanf("%d", &n) != EOF){
		printf("%lld\n", der[n]);
	} 
		return 0;
}