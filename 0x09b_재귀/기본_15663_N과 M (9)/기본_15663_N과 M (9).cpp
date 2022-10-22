#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];
int num[9];
int isused[9];

void func(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; ++i)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    int TEMP = 0;  // 중복 수열 확인! 하려고 TEMP에 담아둔다!
    for (int i = 0; i < n; ++i) {
        if (!isused[i] && TEMP != num[i])// 이전수열 막항과 지금 수열 막항이 같으면 중복!
        {
            isused[i] = 1;
            arr[k] = num[i];
            TEMP = arr[k];
            func(k + 1);
            isused[i] = 0;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> num[i];
    sort(num, num + n);
    func(0);
}