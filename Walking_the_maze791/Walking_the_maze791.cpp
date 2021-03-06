//Walking_the_maze791：走迷宫
//题目解析】
//采用二维数组保存地图数据，如下图所示，'#'代表墙，' . ' 代表通路，在每个路口时，可以向上下左右4个方
//向移动(除过边界)，当一条路径不通时，需要回溯到上一步，回溯到上一个路口后再向其他方向探索，直到走
//到出口，一条路径找到，求解出步数，再回退找其他路径，求解出最短的路径。以上方式是采用深度优先方
//式遍历，但是深度优先方式找到一条路径后，该路径不一定是最短路径，需要将所有路径找到后比较，才能确定出最终的最短路径。
//该题最佳的解决方式是：采用广度优先遍历，即一层一层的往下移动(可参考图的广度优先遍历思想)，采用广
//度优先方式遍历，当找到出口时，则为最短路径。大概方式：在一个位置时，计算该位置上、下、左、右四
//个方向，如果该位置在出口即找到，否则检测该位置是否有效且为通路，如果是将其保存到队列中，再继续
//该过程，直到找到出口，具体参考解题思路。
//
//#.########
//#........#
//########.#
//#........#
//#.########
//#........#
//########.#
//#........#
//#.######.#
//########.#

//【解题思路】
//1. 采用一个二维数组，不断的接受迷宫地图(因为有多个地图)，获取到迷宫地图后，采用广度优先方式走
//迷宫，找到的第一条路径一定是最短的路径，但是深度优先则不一定。
//2. 结构设定：
//pos：x，y表示当前所在位置，level所经过步数
//dir : 表示当前位置的上、下、左、右四个方向
//queue : 广度优先遍历，需要用到队列，保存所经路径
//visit：对走过的路径进行标记
//start和end表示入口和出口
//3. 采用广度优先方式走迷宫：将start入队列，对该位置进行标记，只要队列不为空，继续以下步骤，直到
//到达出口：
//从队列中取出当前位置cur，计算该位置的上、下、坐、右四个方向，计算要走的下一步
//如果next在出口的位置，已经找到返回所走步数level
//否则：如果该位置有效(坐标在地图中)不是墙(该位置字符为'.')，并且没有走过(visit标记为false)
//时，将该位置入队列，再继续其他几个方向

#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;
struct pos { int x, y, level; };

int bfs(vector<vector<char> > & map)
{
	const int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
	queue<pos> que;
	int m = map.size(), n = map[0].size();
	vector<vector<bool> > visit(m, vector<bool>(n, false));
	pos start{ 0, 1, 0 }, end{ 9, 8, 0 };
	que.push(start);
	visit[start.x][start.y] = true;
	while (!que.empty())
	{
		pos cur = que.front(), next; //定义cur和next
		que.pop();
		for (int i = 0; i < 4; ++i) //BFS,优先四个方向进行搜索
		{
			next.x = cur.x + dir[i][0];
			next.y = cur.y + dir[i][1];
			next.level = cur.level + 1;
			if (next.x == end.x && next.y == end.y)
				return next.level;
			if (next.x >= 0 && next.x < m && next.y >= 0 && next.y < n && \
				!visit[next.x][next.y] && map[next.x][next.y] == '.')
			{
				que.push(next);
				visit[next.x][next.y] = true;
			}
		}
	} 
		return 0;
} 

int main()
{
	vector<vector<char> > map(10, vector<char>(10));
	while (cin >> map[0][0]) //由多个测试用例，需要全部读取
	{
		for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j)
		{
			if (i == 0 && j == 0) continue;
			cin >> map[i][j];
		}
		cout << bfs(map) << endl;
	} 
		return 0;
}