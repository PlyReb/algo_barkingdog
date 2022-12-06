#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int tc, h, w;
char board[101][101];
int vis[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        cin >> h >> w;
        queue<pair<int, int>> q;
        queue<pair<int, int>> alpha[27];
        int key[27] = {
            0,
        };
        int cnt = 0;
        for (int i = 0; i <= h + 1; i++)
        {
            fill(vis[i], vis[i] + w + 2, 0);
            fill(board[i], board[i] + w + 2, 0);
        }
    }
}