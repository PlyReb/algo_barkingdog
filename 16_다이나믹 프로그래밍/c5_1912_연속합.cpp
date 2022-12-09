#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100001];
int dp[100001]; // dp[k] : k번째 수를 마지막으로 포함하는 부분합 중 합이 가장 큰 값

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    dp[1] = arr[1]; // 초항은 당연히 첫번째 숫자 값이다.

    for (int i = 2; i <= n; i++)
    {
        if (dp[i - 1] > 0)
        {                               // 이전에 더해놨던 게 양수라서 더하면 이득인 경우
            dp[i] = dp[i - 1] + arr[i]; // 전 항에서 계산한 값(dp [i-1])을 더해줌.
        }
        else
        {                   // 이전에 더해놨던게 음수라서 더하면 오히려 손해인 경우
            dp[i] = arr[i]; // 굳이 더하지 않음.
        }
    }
    for (int i = 1; i <= n; ++i)
        dp[i] = max(dp[i], dp[i - 1] + arr[i]);
    cout << *max_element(dp + 1, dp + n + 1);
}

