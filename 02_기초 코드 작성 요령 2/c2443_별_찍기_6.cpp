#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * (n - i + 1) - 1; k++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}