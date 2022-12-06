#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[21] = {
        0,
    };

    for (int i = 1; i < 21; i++)
    {
        arr[i] = i;
    }

    int n, m, tmp;
    for (int i = 1; i <= 10; i++)
    {
        cin >> n >> m;

        for (int i = n; i <= m; i++)
        {
            tmp = arr[i];
            arr[i] = arr[m];
            arr[m] = tmp;
            m--;
        }
    }

    for (int i = 1; i < 21; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}