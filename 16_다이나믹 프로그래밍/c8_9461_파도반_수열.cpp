#include <iostream>
using namespace std;

int t, n;
int arr[102];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;

    for (int i = 4; i <= 100; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 3];
    }

    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cout << arr[n] << "\n";
    }
}