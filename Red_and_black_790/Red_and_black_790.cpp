//Red_and_black_790：红和黑
//
//[题目解析]
//1. 输入的m和n就是代表输入后续会输入几行几列字符
//2. 第二行开始，输入的字符就是我们的“行走矩阵”，其中“.”->黑色的瓷砖, “#”->白色的瓷砖, “@”->黑色的瓷
//砖，并且你站在这块瓷砖上
//3. 这道题的核心问题是，从你站的位置开始，向周边任意位置走，你能直接走过的黑色瓷砖的总数是多少
//[解题思路]
//该问题可以采用深度优先遍历的方式，统计所有的可能性

/*
DFS问题
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;
struct pos { int x, y; };
int bfs(vector<vector<char> > & map, vector<vector<bool> > & visit, pos & start)
{
	const int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
	queue<pos> que;
	int count = 0;
	int m = map.size(), n = map[0].size();
	que.push(start);
	visit[start.x][start.y] = true; ++count;
	while (!que.empty())
	{
		pos cur = que.front(), next;
		que.pop();
		for (int i = 0; i < 4; ++i)
		{
			next.x = cur.x + dir[i][0];
			next.y = cur.y + dir[i][1];
			if (next.x >= 0 && next.x < m && next.y >= 0 && next.y < n && \
				!visit[next.x][next.y] && map[next.x][next.y] == '.')
			{
				que.push(next);
				visit[next.x][next.y] = true;
				++count;
			}
		}
	} 
		return count;
} 

int main()
{
	int m, n;
	while (cin >> m >> n && (m*n))
	{
		pos start;
		vector<vector<char> > map(m, vector<char>(n));
		vector<vector<bool> > visit(m, vector<bool>(n));
		for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			visit[i][j] = false;
			cin >> map[i][j];
			if (map[i][j] == '@')
				start.x = i, start.y = j;
		}
		cout << bfs(map, visit, start) << endl;
	} 
		return 0;
}