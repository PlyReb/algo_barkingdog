#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m, k;
int x, y, w, t;
string board[1001];
int dist[2][11][1001][1001];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    queue<tuple<int, int, int, int>> q;
    q.push({ 0, 0, 0, 0 });
    dist[0][0][0][0] = 1;

    while (!q.empty())
    {
        tie(t, w, x, y) = q.front();
        q.pop();

        if (x == n - 1 && y == m - 1)
        {
            cout << dist[t][w][x][y] << '\n';
            return 0;
        }

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;
            if (board[nx][ny] == '0')
            {
                int nw = w;
                int nt = 1 - t;
                if (dist[nt][nw][nx][ny] > 0)
                    continue;
                dist[nt][nw][nx][ny] = dist[t][w][x][y] + 1;
                q.push({ nt, nw, nx, ny });
            }
            else
            {
                if (w == k)
                    continue;
                if (t == 0)
                {
                    int nw = w + 1;
                    int nt = 1 - t;
                    if (dist[nt][nw][nx][ny] > 0)
                        continue;
                    dist[nt][nw][nx][ny] = dist[t][w][x][y] + 1;
                    q.push({ nt, nw, nx, ny });
                }
                else
                {
                    int nt = 1 - t;
                    if (dist[nt][w][x][y] > 0)
                        continue;
                    dist[nt][w][x][y] = dist[t][w][x][y] + 1;
                    q.push({ nt, w, x, y });
                }
            }
        }
    }
    cout << -1;
}