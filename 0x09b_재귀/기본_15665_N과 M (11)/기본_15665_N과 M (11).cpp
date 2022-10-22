#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[8];
int num[8];

void func(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << num[arr[i]] << ' '; // arr 인덱스로 참고
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        arr[k] = i;
        func(k + 1);
    }
}

vector<bool> chk(10002);

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    int idx = 0; // 수를 삽입할 인덱스. 중복된 수는 제거할 예정.
    while (n--)
    {
        cin >> num[idx];
        if (chk[num[idx]]) continue; // 이미 이전에 수가 들어온 경우 넘어감
        chk[num[idx]] = true; // 그렇지 않은 경우 수를 num 배열에 추가
        idx++;
    }
    // 현재 num에는 중복되지 않은 수들만 들어가있고 길이는 idx.
    n = idx; // 이전 문제들과 비슷한 표현을 사용하기 위해 n = idx로 둠.
    sort(num, num + n);
    func(0);
}