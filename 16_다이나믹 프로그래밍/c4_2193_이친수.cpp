#include <iostream>
using namespace std;

long long dp[91][2];
int n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    dp[1][1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i][1] = dp[i - 1][0];
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
    }

    cout << dp[n][0] + dp[n][1];
}


