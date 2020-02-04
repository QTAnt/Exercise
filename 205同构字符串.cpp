205ͬ���ַ���
https://leetcode-cn.com/problems/isomorphic-strings/
���������ַ���?s?��?t���ж������Ƿ���ͬ���ġ�


���?s?�е��ַ����Ա��滻�õ�?t?����ô�������ַ�����ͬ���ġ�


���г��ֵ��ַ�����������һ���ַ��滻��ͬʱ�����ַ���˳��
�����ַ�����ӳ�䵽ͬһ���ַ��ϣ����ַ�����ӳ���Լ�����


ʾ�� 1:


����: s = "egg", t = "add"

���: true

ʾ�� 2:


����: s = "foo", t = "bar"

���: false

ʾ�� 3:


����: s = "paper", t = "title"

���: true

˵��:
����Լ���?s?�� t ������ͬ�ĳ��ȡ�


˼·һ��
����ⷨ��ʹ�ù�ϣӳ�䣬�����ַ����໥ӳ�䡣
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

˼·�����Ա������ַ�����Ӧλ�õ��ַ����ַ����ڵ�һ�γ��ֵ�λ��
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


