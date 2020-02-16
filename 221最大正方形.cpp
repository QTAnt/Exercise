221���������
https://leetcode-cn.com/problems/maximal-square/submissions/
��һ���� 0 �� 1 ��ɵĶ�ά�����ڣ��ҵ�ֻ���� 1 ����������Σ��������������


ʾ��:


����:
 

1 0 1 0 0

1 0 1 1 1

1 1 1 1 1

1 0 0 1 0


���: 4


class Solution {
public:
  int maximalSquare(vector<vector<char>>& matrix) 
    {
        int max = 0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j] == '1')
                {
                    int S = find(matrix,i,j);
                    if(S > max)
                        max = S;
                }
            }
        }
        return max;
    }
    int find(vector<vector<char>>& matrix,int row,int col)
    {
        int len = 1;
        while(isExit(matrix,row,col,len))
            len++;
        return len*len;
    }
    inline bool isExit(vector<vector<char>>& matrix,int row,int col,int len)
    {
        if((row + len >= matrix.size()) || (col + len >= matrix[0].size()))
            return false;
        for(int i = 0;i<=len;i++)
        {
            if(matrix[row+len][col+i] == '0')
                return false;
            if(matrix[row+i][col+len] == '0')
                return false;
        }
        return true;
    }
};