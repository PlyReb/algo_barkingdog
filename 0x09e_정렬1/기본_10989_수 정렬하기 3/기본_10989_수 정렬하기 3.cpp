#include <bits/stdc++.h>
using namespace std;

int n;
int arr[10001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) //숫자 개수세기
    {
        int a;
        cin >> a;
        arr[a]++;
    }

    for (int i = 1; i <= 10000; i++)// 각 숫자를 개수만큼 출력
    {
        for (int j = 0; j < arr[i]; j++)
            cout << i << "\n";

    }      
}