#include <iostream>
#include <algorithm>
using namespace std;

int n;
int series[1002], d[1002];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> series[i];
        d[i] = series[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (series[j] < series[i])
            {
                d[i] = max(d[i], d[j] + series[i]);
            }
        }
    }
    cout << *max_element(d, d + n + 1);
}