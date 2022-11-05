#include <bits/stdc++.h>
using namespace std;

int s[301];//각 계단 점수
int n;
int d[301][3];// d[i][j] i번째 계단까지, 연속해서 j(1or 2)계단 올랐을 때 점수 총합의 최대값

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for (int i = 1; i <= n; i++)//각 계단 점수 입력
        cin >> s[i];
    if (n == 1)
    {
        cout << s[1];
        return 0;
    }
    d[1][1] = s[1];//해답의 d[1][2] = 0; 필요한가???????
    d[2][1] = s[2];
    d[2][2] = s[1] + s[2];
    for (int i = 3; i <= n; i++)
    {
        d[i][1] = max(d[i - 2][1], d[i - 2][2]) + s[i];//i-1번째 계단은 밟지 않았다. i-2번재 계단은 연속해서 1, 2 다 된다.
        d[i][2] = d[i - 1][1] + s[i];//i-1번째 계단 밟았다. i번째 계단도 밟아야 하기 때문에 규칙(3계단 연속 못밟)에 따라 i-1번째 계단은 연속해서 1만 된다.
    }
    cout << max(d[n][1], d[n][2]);
}