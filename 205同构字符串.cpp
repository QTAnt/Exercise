205同构字符串
https://leetcode-cn.com/problems/isomorphic-strings/
给定两个字符串?s?和?t，判断它们是否是同构的。


如果?s?中的字符可以被替换得到?t?，那么这两个字符串是同构的。


所有出现的字符都必须用另一个字符替换，同时保留字符的顺序。
两个字符不能映射到同一个字符上，但字符可以映射自己本身。


示例 1:


输入: s = "egg", t = "add"

输出: true

示例 2:


输入: s = "foo", t = "bar"

输出: false

示例 3:


输入: s = "paper", t = "title"

输出: true

说明:
你可以假设?s?和 t 具有相同的长度。


思路一：
常规解法，使用哈希映射，两个字符串相互映射。
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> smap;
        unordered_map<char,char> tmap;
        for(int i = 0; s[i] != '\0'; ++ i){
            char ss = s[i];
            char tt = t[i];
            if(smap.count(ss)){
                if(smap[ss] != tt)    return false;
            }
            else if(tmap.count(tt)){
                if(tmap[tt] != ss)  return false;
            }
            else{
                smap[ss] = tt;
                tmap[tt] = ss;
            }
        }
        return true;
    }
};

思路二：对比两个字符串对应位置的字符在字符串内第一次出现的位置
class Solution {
public:

    bool isIsomorphic(string s, string t) {

        for(int i=0;i<s.size();i++){

            if(s.find(s[i])!=t.find(t[i]))

            return false;

        }

        return true;

    }

};


