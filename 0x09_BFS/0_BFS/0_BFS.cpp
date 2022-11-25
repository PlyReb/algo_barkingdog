//#include <iostream>
//#include <utility>
//#include <queue>
//using namespace std;
//
//int board[501][501] =
//{
//	{1,1,1,0,1,0,0,0,0,0},
//	{1,0,0,0,1,0,0,0,0,0},
//	{1,1,1,0,1,0,0,0,0,0},
//	{1,1,0,0,1,0,0,0,0,0},
//	{0,1,0,0,0,0,0,0,0,0},
//	{0,0,0,0,0,0,0,0,0,0},
//	{0,0,0,0,0,0,0,0,0,0}
//};
//
//bool visit[501][501];
//int x = 7, y = 10;
//int dir_x[4] = {1, 0, -1, 0};
//int dir_y[4] = {0,1,0,-1};
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	queue <pair<int, int>> Q;
//	visit[0][0] = 1;
//	Q.push({ 0,0 });
//	while (!Q.empty())
//	{
//		pair<int, int> cur = Q.front();
//		Q.pop();
//		cout << '(' << cur.first << ", " << cur.second << ") -> ";
//		for (int i = 0; i < 4; i++)
//		{
//			int ch_x = cur.first + dir_x[i];
//			int ch_y = cur.second + dir_y[i];
//			if (ch_x < 0 || ch_x >= x || ch_y < 0 || ch_y >= y)
//				continue;
//			if (visit[ch_x][ch_y] || board[ch_x][ch_y] == 0)
//				continue;
//			visit[ch_x][ch_y] = 1;
//			Q.push({ ch_x,ch_y });
//
//		}
//
//	}
//}

#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int board[501][501] =
{
	{1,1,1,0,1,0,0,0,0,0},
	{1,0,0,0,1,0,0,0,0,0},
	{1,1,1,0,1,0,0,0,0,0},
	{1,1,0,0,1,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0}
};

bool visit[501][501];
int max_x = 7, max_y = 10;
int dir_x[4] = { 1, -1, 0, 0 };
int dir_y[4] = { 0, 0, 1, -1 };

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	queue<pair<int, int>> Q;
	visit[0][0] = 1;
	Q.push({ 0,0 });
	
	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();
		cout << '(' << cur.first << ", " << cur.second << ") -> ";
		for (int i = 0; i < 4; i++)
		{
			int ch_x = cur.first + dir_x[i];
			int ch_y = cur.second + dir_y[i];

			if (ch_x < 0 || ch_y < 0 || ch_x >= max_x || ch_y >= max_y)
				continue;
			else if (board[ch_x][ch_y] == 0 || visit[ch_x][ch_y])
				continue;
			visit[ch_x][ch_y] = 1;
			Q.push({ ch_x,ch_y });
		}
	}
}