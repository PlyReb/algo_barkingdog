#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long i, j, tmp;
    cin >> i >> j;

    if (i > j)
    {
        swap(i, j);
    }
    if (i == j || j - i == 1)
    {
        cout << 0;
        return 0;
    }
    cout << j - i - 1 << "\n";
    for (long long k = i + 1; k < j; k++)
    {
        cout << k << " ";
    }
}
