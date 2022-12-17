#include <iostream>
using namespace std;

int d[110];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    d[1] = 9;
    d[2] = 17;
    for (int i = 3; i <= n; i++)
    {
        d[i] = (2 * d[i - 1] - 2 * i) % 1000000000;
    }
    cout << d[n];
}