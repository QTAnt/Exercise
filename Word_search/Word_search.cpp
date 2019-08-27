//Word_search:单词查询
//https ://leetcode-cn.com/problems/word-search/submissions/
//给定一个二维网格和一个单词，找出该单词是否存在于网格中。
//单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。
//示例 :
//board =
//[
// ['A', 'B', 'C', 'E'],
// ['S', 'F', 'C', 'S'],
// ['A', 'D', 'E', 'E']
//]
//给定 word = "ABCCED", 返回 true.
//给定 word = "SEE", 返回 true.
//给定 word = "ABCB", 返回 false.
class Solution {
public:
	bool exist(vector<vector<char>>& board, string word) {
		for (int i = 0; i<board.size(); i++){
			for (int j = 0; j<board[0].size(); j++){
				if (dfs(board, i, j, word, 0))
					return true;
			}
		}
		return false;
	}

	bool dfs(vector<vector<char>>& board, int i, int j, string& word, int k){
		if (k == word.size())
			return true;
		if (i<0 || i >= board.size() || j<0 || j >= board[0].size() || board[i][j] != word[k])
			return false;
		char c = board[i][j];
		board[i][j] = '*';
		bool res = dfs(board, i + 1, j, word, k + 1) || dfs(board, i - 1, j, word, k + 1) ||
			dfs(board, i, j + 1, word, k + 1) || dfs(board, i, j - 1, word, k + 1);
		board[i][j] = c;
		return res;
	}
};