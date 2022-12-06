#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[9];
    int mx = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> num[i];
        if (mx < num[i])
            mx = num[i];
    }

    cout << mx << "\n";
    for (int i = 0; i < 9; i++)
    {
        if (num[i] == mx)
        {
            cout << i + 1 << "\n";
            return 0;
        }
    }
}