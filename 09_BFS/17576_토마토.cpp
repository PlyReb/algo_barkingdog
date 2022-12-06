#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second

int board[1002][1002];
int dist[1002][1002];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n;
    queue<pair<int, int>> Q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 1)//익은 토마토라면 
                Q.push({i, j});//!!!동시 여러시작점 구현!!
            if (board[i][j] == 0)//안 익은 토마토라면
                dist[i][j] = -1;
        }
    }

    while (!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (dist[nx][ny] >= 0)//이미 익은 토마토 or 토마토x 칸이라면
                continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (dist[i][j] == -1)//아직 안익은 토마토가 있다면
            {
                cout << -1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
            //반복문 돌면서 max값 검색. 가장 마지막 채워진 칸 찾아낸다.
        }
    }
    cout << ans;
}