The_most_difficult_problem：最难的问题

题目解析】：题目很容易理解，原文与密码错位5个英文字符
密码字母：A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
原文字母：V W X Y Z A B C D E F G H I J K L M N
O P Q R S T U
【解题思路】：密码 > 'E'
则：原文= 密码 - 5
否则： 原文 = 密码 + 21

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