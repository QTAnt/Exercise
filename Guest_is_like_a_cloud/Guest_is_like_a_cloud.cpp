Guest_is_like_a_cloud��749��������

#include <iostream>
#define MAX 83 //����ù�ʽ���㣬��Ҫ�����������ֵ
void solve(long long num[])
{
for (int i = 2; i < MAX; i++)
{
num[i] = num[i - 1] + num[i - 2];
}
} 
long long sum_traversal(long long num[], int from, int to) //�ⷨ1���ñ���������
{
long long ans = 0;
for (int i = from - 1; i < to; i++) //�������±��from - 1������to - 1
{
ans += num[i];
} 
return ans;
} 
long long sum_formula(long long num[], int from, int to) //�ⷨ2���ù�ʽ���
{
return num[to + 1] - num[from]; //��to + 2����±���to + 1����from + 2 - 1�����
����from
} 
int main()
{
int from, to;
long long num[MAX] = {1, 1};
//��ǰ����Fibonacci����
solve(num);
while (std::cin >> from >> to)
{
std::cout << sum_formula(num, from, to) << std::endl; //����������ѡһ����
ʽ���졣
} 
return 0;
}