#include <iostream>
using namespace std;

int n, m, a, b;
int arr[100001];
int sum[100001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    sum[1] = arr[1];

    for (int i = 2; i <= n; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        cout << sum[b] - sum[a - 1] << "\n";
    }
}