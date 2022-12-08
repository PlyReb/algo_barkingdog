#include <iostream>
#include <algorithm>

using namespace std;

int dp[10001][3];
int wine[10001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> wine[i];
    }

    dp[1][0] = 0;
    dp[1][1] = wine[1];
    dp[1][2] = 0;
    dp[2][0] = 0;
    dp[2][1] = dp[1][0] + wine[2];
    dp[2][2] = dp[1][1] + wine[2];
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        dp[i][1] = dp[i - 1][0] + wine[i];
        dp[i][2] = dp[i - 1][1] + wine[i];
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]});
}
