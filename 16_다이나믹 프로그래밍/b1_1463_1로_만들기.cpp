#include <iostream>
#include <algorithm>

using namespace std;

int d[1000001];
int n;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    d[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + 1;//숫자 i가 1이 되는 최소 횟수 기록.
        if (i % 2 == 0 && d[i] > d[i / 2] + 1)
        {
            d[i] = d[i / 2] + 1;
        }
        if (i % 3 == 0 && d[i] > d[i / 3] + 1)
        {
            d[i] = d[i / 3] + 1;
        }
    }
    cout << d[n];
}