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
            cout << num[arr[i]] << ' '; // arr �ε����� ����
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
    int idx = 0; // ���� ������ �ε���. �ߺ��� ���� ������ ����.
    while (n--)
    {
        cin >> num[idx];
        if (chk[num[idx]]) continue; // �̹� ������ ���� ���� ��� �Ѿ
        chk[num[idx]] = true; // �׷��� ���� ��� ���� num �迭�� �߰�
        idx++;
    }
    // ���� num���� �ߺ����� ���� ���鸸 ���ְ� ���̴� idx.
    n = idx; // ���� ������� ����� ǥ���� ����ϱ� ���� n = idx�� ��.
    sort(num, num + n);
    func(0);
}