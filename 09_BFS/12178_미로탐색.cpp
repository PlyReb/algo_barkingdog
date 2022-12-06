#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

string board[102];
int dist[102][102];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }
    for(int i = 0; i < n; i++)
    {
        fill(dist[i],dist[i]+m,-1);//-1로 채우는 의미는?? 안채워도 상관 없잖아?
        //어차피 밑에서 {0,0} push해서 시작점 알려주고 40행 조건으로 걸러내잖아?
    }
    queue<pair<int, int>> q;
    q.push({0, 0}); 
    dist[0][0] = 0;
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;
            if (board[nx][ny] != '1' || dist[nx][ny] > 0)
                continue;
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            q.push({nx, ny});
        }
    }
    cout << dist[n - 1][m - 1] + 1;
}