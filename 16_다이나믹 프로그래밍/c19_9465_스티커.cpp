#include <iostream>
using namespace std;

int t, n;
int b[3][100020];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            cin >> b[1][j];
        }
        for (int j = 1; j <= n; j++)
        {
            cin >> b[2][j];
        }
    }
}