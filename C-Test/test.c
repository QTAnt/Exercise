//1.�����������α�����ֵ��������ֵ�����ݽ���

#define _CRT_SECURE_NO_WARINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//��������,�����ŵ�ǰ��
	int a = 10;
	int b = 20;
	int tmp = 0;           //��������,��ʼ��
	
	scanf_s("%d%d", &a, &b); //��ȡ��������
	printf("a = %d b = %d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}

//2.����������ʱ����������������������
//���(��ͬΪ0������Ϊ1),���ᵼ�����
int main()
{
	//��������,�����ŵ�ǰ��
	int a = 10;   
	int b = 20;
	int tmp = 0;           //��������,��ʼ��

	scanf_s("%d%d", &a, &b); //��ȡ��������
	printf("a = %d b = %d\n", a, b);
	/*tmp = a;
	a = b;
	b = tmp;*/
	//01010_a
	//10100_b
	//11110_�����
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}
// �����⣺�ҳ��������г���һ�ε����֡�1 2 3 4 1 2 3 4 5(��򷽷�  2>1 2 3 4  1 2 3 4 5 6)


//3.��10�����������ֵ
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int max = arr[0];//��ʼ��Ϊ�����һ���������ܳ�ʼ��Ϊ0��ʼ���������
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr)����Ĵ�С����λ���ֽ�
	for (i = 1; i <sz ; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
}


//4.�����������Ӵ�С���


//void Swap(int x, int y)   ����û�н�����ַ���޷�ʵ�ֽ���
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//ָ�����������ŵ�ַ
//ָ�����ǰ��*����ʾ��ָ����н����ò������ҵ�ָ����ָ����
//void �޷������ͣ�char ����Ϊ�ַ��� ��char * �ַ�ָ�� ��int ����
void Swap(int *px, int *py)
{
	int tmp = *px;//�����ã��ҵ� a
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
		Swap(&a, &b);//ȡ��ַ
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


//5.�����������Լ��(շת���������������������ģ�����õ����������ó���ģ������ֱ������Ϊ0  a%b=c;b%c=..(bֵ����a,cֵ����b) ѭ�� )
int main()
{
	int x = 16;
	int y = 24;
	int z = 0;

	while (z=x%y)//x%y�õ���������0����������0��ֹͣ  ���ÿ���x,yֵ�Ĵ�С
	{
		x = y;//��ֵ
		y = z;//��ֵ ����ģ��
	}
	printf("%d\n", y);
	return 0;
}


