#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dp[16], t[16], p[16];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i] >> p[i];
    }

    for (int i = n; i > 0; i--)
    {
        if (i + t[i] > n + 1)
        {
            dp[i] = dp[i + 1];
        }
        else
        {
            dp[i] = max(dp[i + 1], dp[i + t[i]] + p[i]);
        }
    }

    cout << dp[1];
}