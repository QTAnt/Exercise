最长回文子串
https://leetcode-cn.com/problems/longest-palindromic-substring/
给定一个字符串 s，找到 s 中最长的回文子串。你可以假设?s 的最大长度为 1000。

示例 1：


输入: "babad"

输出: "bab"

注意: "aba" 也是一个有效答案。

示例 2：


输入: "cbbd"

输出: "bb"

class Solution {
public
    int Max = 0;
    string ret = ;
    void func(int l, int r, string& s)
    {
        int L = l, R = r;
        while(L = 0 && R  s.size() && s[L] == s[R])
        {
            if(R-L+1  Max)
            {
                Max = R-L+1;
                ret = s.substr(L, R-L+1);
            }
            R++;L--;
        }
    }
    string longestPalindrome(string s) {
        if(s.size() = 1) return s;
        for(int i = 0; i  s.size(); i++)
        {
            if(i+1  s.size())
            {
                func(i,i+1,s);
            }
            func(i, i, s);
        }
        return ret;
    }
};