Cut_flower_strip����������

#include<iostream>
#include<string>
int main()
{
std::string s, t;
while (std::cin >> s >> t)
{
int res = 0;
size_t pos = 0;
//������ s �в��� t ���ɣ�ֱ����Ҳ�Ҳ��� t
while ((pos = s.find(t, pos)) != std::string::npos)
{
pos += t.size(); //����t������ĳ���
++res; //����
} 
std::cout << res << std::endl;
} 
return 0;
}