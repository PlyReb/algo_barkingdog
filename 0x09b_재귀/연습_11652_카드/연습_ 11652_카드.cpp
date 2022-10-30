#include<bits/stdc++.h>
using namespace std;

int n;
long long arr[1000001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);//arr �ּ� ���� arr+n-1 �ּұ����� �� ����.

	int cnt = 0;
    long long max_val = -(1ll << 62) - 1; // 1�� long long���� ����ȯ���� �ʰ� 1 << 62�� �ۼ��� int overflow �߻�
    int max_cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || arr[i - 1] == arr[i])
            cnt++; // i�� 0�� ��� ���� ���� true�̱� ������ a[i-1]�� �������� ����
        else
        {
            if (cnt > max_cnt)
            {
                max_cnt = cnt;
                max_val = arr[i - 1];
            }
            cnt = 1;
        }
    }
    if (cnt > max_cnt)
        max_val = arr[n - 1]; // ���� ������ ���� �� �� �����ߴ����� ������ Ȯ��
    cout << max_val;
}