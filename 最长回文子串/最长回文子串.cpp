������Ӵ�
https://leetcode-cn.com/problems/longest-palindromic-substring/
����һ���ַ��� s���ҵ� s ����Ļ����Ӵ�������Լ���?s ����󳤶�Ϊ 1000��

ʾ�� 1��


����: "babad"

���: "bab"

ע��: "aba" Ҳ��һ����Ч�𰸡�

ʾ�� 2��


����: "cbbd"

���: "bb"

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