#include <iostream>
using namespace std;

int t, n;
int fibo[41][2];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    fibo[1][1] = 1;
    fibo[0][0] = 1;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        for (int j = 2; j <= n; j++)
        {
            fibo[j][1] = fibo[j - 1][1] + fibo[j - 2][1];
            fibo[j][0] = fibo[j - 1][0] + fibo[j - 2][0];
        }
        cout << fibo[n][0] << " " << fibo[n][1] << "\n";
    }
}