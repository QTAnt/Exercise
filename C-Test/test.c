//1.给定两个整形变量的值，将两个值的内容交换

#define _CRT_SECURE_NO_WARINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//创建变量,变量放到前面
	int a = 10;
	int b = 20;
	int tmp = 0;           //交换变量,初始化
	
	scanf_s("%d%d", &a, &b); //获取两个变量
	printf("a = %d b = %d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}

//2.不允许创建临时变量，交换两个数的内容
//异或(相同为0，相异为1),不会导致溢出
int main()
{
	//创建变量,变量放到前面
	int a = 10;   
	int b = 20;
	int tmp = 0;           //交换变量,初始化

	scanf_s("%d%d", &a, &b); //获取两个变量
	printf("a = %d b = %d\n", a, b);
	/*tmp = a;
	a = b;
	b = tmp;*/
	//01010_a
	//10100_b
	//11110_异或结果
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}
// 面试题：找出这组数中出现一次的数字—1 2 3 4 1 2 3 4 5(异或方法  2>1 2 3 4  1 2 3 4 5 6)


//3.求10个整数中最大值
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int max = arr[0];//初始化为数组第一个数，不能初始化为0，始于所有情况
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr)数组的大小，单位：字节
	for (i = 1; i <sz ; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
}


//4.将三个数按从大到小输出


//void Swap(int x, int y)   错误：没有交换地址，无法实现交换
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//指针变量用来存放地址
//指针变量前加*，表示对指针进行解引用操作，找到指针所指内容
//void 无返回类型；char 返回为字符型 ；char * 字符指针 ；int 整形
void Swap(int *px, int *py)
{
	int tmp = *px;//解引用，找到 a
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	if (a < b)
	{
		Swap(&a, &b);//取地址
		///*int tmp = b;
		//b = c;
		//c = tmp;*/
	}
	if (a < c);
	{
		Swap(&a, &c);
	}
	if (b < c)
	{
		Swap(&b, &c);
	}

	printf("a = %d b = %d c = %d\n", a, b, c);
	return 0;
}


//5.求两个的最大公约数(辗转相除法——余数：被除数模除数得到的余数再让除数模余数，直至余数为0  a%b=c;b%c=..(b值赋给a,c值赋给b) 循环 )
int main()
{
	int x = 16;
	int y = 24;
	int z = 0;

	while (z=x%y)//x%y得到余数不是0，继续；是0，停止  不用考虑x,y值的大小
	{
		x = y;//赋值
		y = z;//赋值 继续模除
	}
	printf("%d\n", y);
	return 0;
}


