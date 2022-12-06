#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int board[501][501];
int n, m;
int visit[501][501];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int mx = 0;
int num = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 0 || visit[i][j] == 1)
                continue;
            num++;
            queue<pair<int, int>> q;
            q.push({i, j});
            visit[i][j] = 1;
            int area = 0;
            while (!q.empty())
            {
                area++;
                pair<int, int> cur = q.front();
                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int nx = cur.first + dx[i];
                    int ny = cur.second + dy[i];
                    if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                        continue;
                    if (board[nx][ny] == 0 || visit[nx][ny] == 1)
                        continue;
                    visit[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
            mx = max(mx, area);
        }
    }
    cout << num << '\n'
         << mx << "\n";
}