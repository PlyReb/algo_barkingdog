#include <iostream>
#include <algorithm>
using namespace std;

int d[1005][35];
int tree[1005];
int t, w;
int cnt = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t >> w;
    for (int i = 1; i <= t; i++)
    {
        cin >> tree[i];
    }

    // // 자두 한번도 안움직임
    // for (int i = 1; i <= t; i++)
    // {
    //     if (tree[i] == 1)
    //     {
    //         cnt++;
    //     }
    //     d[i][0] = cnt;
    // }
    // for (int i = 1; i <= t; i++)
    // {
    //     for (int j = 1; j <= w; j++)
    //     {
    //         if (j % 2 + 1 == tree[i]) // 현재 사람의 위치와 떨어지는 나무 위치가 같다면
    //         {
    //             d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + 1;
    //         }
    //         else
    //         {
    //             d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]);
    //         }
    //     }
    // }
    // cout << *max_element(d[t], d[t] + w + 1); // d[t][0]~d[t][w] 중에서 가장 큰 값

    for (int i = 1; i <= t; i++)
    {
        if (tree[i] == 1)
            cnt++;
        d[i][0] = cnt;
    }
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            d[i][j] = max(d[i - 1][j], d[i - 1][j - 1]) + (tree[i] == j % 2 + 1);
        }
    }
    cout << *max_element(d[t], d[t] + w + 1);
}