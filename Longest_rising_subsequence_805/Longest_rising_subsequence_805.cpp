//Longest_rising_subsequence_805�������������
//https ://www.nowcoder.com/questionTerminal/d83721575bd4418eae76c916483493de
//����Ŀ������
//��һ��������������������У���̬�滮�ĵ���Ӧ�ã���ϸ������˼·
//������˼·��
//��̬�滮���ѵ����ڶ�������ʹ�����״̬ת�Ʒ��̡���
//1. ����height���洢���ݣ�f[i]Ϊ��height[i]��β��Ԫ�ص������������Ԫ�ظ�������ʼʱ��f��������
//ȫ����ʼ����1����Ϊ�����������ٰ���һ��Ԫ�ء�
//2. ����"״̬ת�Ʒ���"
//һ��ʼ�Ƚ�f�е�����ȫ����Ϊ1����Ϊ��С�������г���Ϊ1
//Ȼ�����ÿ��height[i]��ͨ������height[0]~~height[i - 1]֮������ݣ�����ڸ��������ҵ�һ��
//height[j]��height[j]С��Ԫ�أ���ʼ�Ƚ�f[j] + 1��f[i]�Ĵ�С�����f[j] + 1>f[j]�����f[i], ��ˣ�
//��height[i] > height[j]: f[i] = max(f[i], f[j] + 1)
//��height[i] <= height[j]������ȡ��һ������

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		// �����û����������
		vector<int> height(n, 0);
		for (int i = 0; i < n; i++){
			cin >> height[i];
		} // f��������״̬ת�Ʒ��̵Ľ����f[i]��ʾ��height[i]��β�������������������Ԫ�صĸ���
			vector<int> f(n, 1);
		int result = 1;
		// �������е�����һ��һ������
		for (int i = 1; i < n; i++){
			// ��0��ʼͳ�Ƶ�iλ�ã�����������г���
			for (int j = 0; j < i; j++){
				if (height[i] > height[j]){
					f[i] = max(f[i], f[j] + 1);
				}
			} // ��ȡ��0��iλ�õ�������г���
				result = max(result, f[i]);
		} 
			cout << result << endl;
	}
}