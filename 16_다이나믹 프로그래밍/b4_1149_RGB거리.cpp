#include <iostream>
#include <algorithm>
using namespace std;

int c[1001][3];
int r[1001], g[1001], b[1001];
int n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> r[i];
        cin >> g[i];
        cin >> b[i];
    }

    c[1][0] = r[1];
    c[1][1] = g[1];
    c[1][2] = b[1];

    for (int i = 2; i <= n; i++)
    {
        c[i][0] = min(c[i - 1][1], c[i - 1][2]) + r[i];
        c[i][1] = min(c[i - 1][0], c[i - 1][2]) + g[i];
        c[i][2] = min(c[i - 1][0], c[i - 1][1]) + b[i];
    }
    cout << min({c[n][0], c[n][1], c[n][2]});
    // cout << *min_element(c[n], c[n]+3);
}