#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int n, m;
int board[101][101];
int visit[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector<pair<int, int>> lup[101][101];
int x, y, a, b;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> a >> b;
        lup[x][y].push_back({a, b});
    }
    queue<pair<int, int>> q;
    board[1][1] = 1;
    visit[1][1] = 1;
    q.push({1, 1});
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        for (pair<int, int> next : lup[cur.first][cur.second])
        {
            if (visit[next.first][next.second])
                continue;
            board[next.first][next.second] = 1;
        }
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 1 || ny < 1 || nx > n || ny > n || visit[nx][ny] || board[nx][ny] == 0)
                continue;
            q.push({nx, ny});
            visit[nx][ny] = 1;
        }
    }
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            mx += board[i][j];
        }
    }
    cout << mx;
}

//추가 조건::
