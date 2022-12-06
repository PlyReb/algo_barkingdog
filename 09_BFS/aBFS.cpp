#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int board[501][501] =
	{
		{1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
		{1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
		{1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
		{1, 1, 0, 0, 1, 0, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

int x = 7, y = 10;
int visit[501][501];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<pair<int, int>> q;
	q.push({0, 0});
	visit[0][0]= 1;
	while (!q.empty())
	{
		pair <int, int> cur = q.front();
		q.pop();
		cout << '(' << cur.first << ", " << cur.second << ") -> ";
		for (int i = 0 ; i < 4; i++)
		{
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if(nx < 0 || ny < 0 || nx >= x || ny >= y)
				continue;
			if(board[nx][ny]==0 || visit[nx][ny])
				continue;
			q.push({nx, ny});
			visit[nx][ny]=1;
		}
	}
}

// #include <iostream>
// #include <queue>
// #include <utility>

// using namespace std;

// int board[501][501] =
// 	{
// 		{1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
// 		{1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
// 		{1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
// 		{1, 1, 0, 0, 1, 0, 0, 0, 0, 0},
// 		{0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
// 		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
// 		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
// int visit[501][501];
// int x = 7;
// int y = 10;
// int dx[4] = {1, -1, 0, 0};
// int dy[4] = {0, 0, 1, -1};

// int main(void)
// {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);

// 	queue<pair<int, int>> q;
// 	q.push({0, 0});
// 	visit[0][0] = 1;
// 	while (!q.empty())
// 	{
// 		pair<int, int> cur = q.front();
// 		q.pop();
// 		cout << '(' << cur.first << ", " << cur.second << ") -> ";
// 		for (int i = 0; i < 4; i++)
// 		{
// 			int nx = cur.first + dx[i];
// 			int ny = cur.second + dy[i];
// 			if (nx < 0 || ny < 0 || nx >= x || ny >= y)
// 				continue;
// 			if (visit[nx][ny] == 1 || board[nx][ny] == 0)
// 				continue;
// 			q.push({nx, ny});
// 			visit[nx][ny] = 1;
// 		}
// 	}
// }