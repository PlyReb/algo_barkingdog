#include <iostream>
#include <algorithm>
using namespace std;

int n;
int w[10001];
int mx[10001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }

    mx[1] = w[1];
    mx[2] = w[1] + w[2];

    for (int i = 3; i <= n; i++)
    {
        mx[i] = max({mx[i - 1], mx[i - 2] + w[i], mx[i - 3] + w[i - 1] + w[i]});
    }
    cout << mx[n];
}