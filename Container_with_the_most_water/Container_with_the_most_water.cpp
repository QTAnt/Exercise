//Container_with_the_most_water 
//https ://leetcode-cn.com/problems/container-with-most-water/submissions/
//���� n ���Ǹ����� a1��a2��...��an��ÿ�������������е�һ����(i, ai) ���������ڻ� n ����ֱ�ߣ���ֱ�� i �������˵�ֱ�Ϊ(i, ai) ��(i, 0)���ҳ����е������ߣ�ʹ�������� x �Ṳͬ���ɵ�����������������ˮ��
//˵�����㲻����б�������� n ��ֵ����Ϊ 2��

class Solution {
public:
	int maxArea(vector<int>& height) {
		if (height.size() <= 1) return -1;
		int i = 0, j = height.size() - 1, res = 0;
		while (i < j){
			int h = min(height[i], height[j]);
			res = max(res, h * (j - i));
			if (height[i] < height[j]) ++i;
			else --j;
		}
		return res;
	}
};