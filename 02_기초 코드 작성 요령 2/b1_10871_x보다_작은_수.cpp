#include <iostream>
using namespace std;

int n, x;
int arr[10001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <x)
            cout << arr[i] << " ";
    }
}
