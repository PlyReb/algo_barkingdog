#include <iostream>
using namespace std;

int arr[7];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;
    int mn = 100;

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 1)
        {
            sum += arr[i];
            if (mn > arr[i])
                mn = arr[i];
        }
    }
    if (sum == 0)
        cout << "-1\n";
    else
    {
        cout << sum << "\n";
        cout << mn << "\n";
    }
    return 0;

}