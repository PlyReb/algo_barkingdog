#include <iostream>
#include <algorithm>
using namespace std;

int n;
int p[1002], d[1002];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            d[i] = max(p[i], d[i - j] + p[j]);
        }
    }
    cout << d[n];
}