#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dp[17], t[17], p[17];
// dp[i] 는 i일부터 면담 가능하다 했을 때 얻을 수 있는 최대값
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i] >> p[i];
    }

    for (int i = n; i > 0; i--) // 거꾸로 생각해보자. 1일부터 시작이 아닌 n일부터 역순으로.
    {
        if (i + t[i] - 1 <= n) // i일에 해당하는 면담이 완료가 가능한 날이라면(i+t[i]-1은 i일에 해당하는 면담의 완료일)
        {
            dp[i] = max(dp[i + t[i]] + p[i], dp[i + 1]);    // i일 면담을 안 하고 얻는 최대값과 
                                                            //i일에 잡힌 면담을 진행하여 얻는 최대값을 비교해본다.
        }
        else // i일에 잡힌 면담이 완료 불가능 하다면
        {
            dp[i] = dp[i + 1]; // i일 면담은 건너뛰고 i+1일에 면담을 시작해서 얻는 최대값을 넣어주면 된다.
        }
    }
    cout << dp[1] << "\n";
}