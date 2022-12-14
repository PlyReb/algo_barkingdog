#include <iostream>
#include <algorithm>
using namespace std;

int n;
int sc[301];
int mxsc[301][3];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> sc[i];
    }
    mxsc[1][1] = sc[1];
    mxsc[1][2] = 0;
    mxsc[2][1] = sc[2];
    mxsc[2][2] = sc[1] + sc[2];
    for (int i = 3; i <= n; i++)
    {
        mxsc[i][1] = max(mxsc[i - 2][1], mxsc[i - 2][2]) + sc[i];
        mxsc[i][2] = mxsc[i - 1][1] + sc[i];
    }
    int res = max(mxsc[n][1], mxsc[n][2]);
    cout << res;
}