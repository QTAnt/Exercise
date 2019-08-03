//Interpret_password_845：解读密码
//https ://www.nowcoder.com/questionTerminal/16fa68271ee5448cafd504bb4a64b482
//【题目解析】
//题目意思：给定字符串中包含其他符合一级数字，将字符串中数字解析出来。
//【解题思路】
//1. 题目明确说明有多行：采用getline进行循环输入
//2. 对输入的字符串进行遍历，如果是数字字符，将其输出即可

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstdio>
using namespace std;

int main(){
	string s;
	while (getline(cin, s)){
		int len = s.length();
		for (int i = 0; i<len; i++){
			if (s[i] >= '0'&&s[i] <= '9')
				cout << s[i];
		} 
			cout << endl;
	} 
		return 0;
}