The_most_difficult_problem�����ѵ�����

��Ŀ����������Ŀ��������⣬ԭ���������λ5��Ӣ���ַ�
������ĸ��A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
ԭ����ĸ��V W X Y Z A B C D E F G H I J K L M N
O P Q R S T U
������˼·�������� > 'E'
��ԭ��= ���� - 5
���� ԭ�� = ���� + 21

#include <stdio.h>
int main() {
char c;
while ((c = getchar()) != EOF){
if ('A' <= c && 'Z' >= c) {
c = (c > 'E') ? (c - 5) : (c + 21);
} 
putchar(c);
} 
return 0;
}