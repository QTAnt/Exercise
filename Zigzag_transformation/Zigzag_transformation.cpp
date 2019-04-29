//Zigzag_transformation
//https://leetcode-cn.com/problems/zigzag-conversion/submissions/

//将一个给定字符串根据给定的行数，以从上往下、从左到右进行 Z 字形排列。比如输入字符串为 "LEETCODEISHIRING" 行数为 3 时，排列如下：L   C   I   R
//E T O E S I I G
//E   D   H   N
//之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："LCIRETOESIIGEDHN"。请你实现这个将字符串进行指定行数变换的函数：string convert(string s, int numRows); 示例 1:输入 : s = "LEETCODEISHIRING", numRows = 3
//输出 : "LCIRETOESIIGEDHN"
// 示例 2 : 输入 : s = "LEETCODEISHIRING", numRows = 4
//	输出 : "LDREOEIIECIHNTSG"
//	 解释 :
//
//		L     D     R
//		E   O E   I I
//		E C   I H   N
//		T     S     G

class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 0 || numRows == 1)return s;
		string out = "", app = "";
		int len = s.length(), n = 2 * numRows - 2, i = 0, temp = 0;
		for (int index = 0; index<numRows; index++){
			i = index;
			while (index == 0 && i<len){
				app = s.substr(i, 1);
				out.append(app);
				i += n;
			}
			while (i<len){
				app = s.substr(i, 1);
				out.append(app);
				temp = n - 2 * index;
				if ((i + temp)<len&&temp>0){
					app = s.substr(i + temp, 1);
					out.append(app);
				}
				i += n;
			}
		}
		return out;
	}
};

