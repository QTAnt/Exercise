﻿//[Statistical_palindrome:统计回文](https://www.nowcoder.com/practice/9d1559511b3849deaa71b576fa7009dc?tpId=85&&tqId=29842&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking)
//题目描述
//“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。花花非常喜欢这种拥有对称美的回文串，生日的时候她得到两个礼物分别是字符串A和字符串B。现在她非常好奇有没有办法将字符串B插入字符串A使产生的字符串是一个回文串。你接受花花的请求，帮助她寻找有多少种插入办法可以使新串是一个回文串。如果字符串B插入的位置不同就考虑为不一样的办法。
//例如：A = “aba”，B = “b”。这里有4种把B插入A的办法：
//* 在A的第一个字母之前 : "baba" 不是回文 
//* 在第一个字母‘a’之后 : "abba" 是回文 
//* 在字母‘b’之后 : "abba" 是回文 
//* 在第二个字母'a'之后 "abab" 不是回文 
//所以满足条件的答案为2
//输入描述 :
//每组输入数据共两行。
//第一行为字符串A
//第二行为字符串B
//字符串长度均小于100且只包含小写字母输出描述 : 输出一个数字，表示把字符串B插入字符串A之后构成一个回文串的方法数示
//例1
//输入aba
//b
//输出2
						
#include<iostream>
#include<string>
						  using namespace std;

bool IsCircleText(string str1)   //判断回文
{
	int length = str1.length();
	for (int i = 0; i<length; i++)
	{
		if (str1[i] != str1[length - 1])
			return false;
		length = length - 1;
	}
	return true;
}

int main()
{
	string str1, str2, temp;
	int count, len;
	while (cin >> str1 >> str2)
	{
		count = 0;
		temp = str1;
		len = str1.length() + 1;
		for (int i = 0; i<len; i++)
		{
			str1 = temp;
			str1.insert(i, str2);   //在A字符串中以此插入B字符串
			if (IsCircleText(str1))       //判断是否是回文
				count = count + 1;    //统计回文    
		}
		cout << count << endl;
	}
	return 0;
}
