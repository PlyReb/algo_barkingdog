#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[21];
int cnt = 0;

void func(int i, int total)// arr[i]�� ���ϰų� ������ �ʴ� �б⸦ ���� �������� s�� ���ö����� ������ ����.
{
	if (i == n)
	{
		if (total == s) cnt++;
		return;
	}
	func(i + 1, total);
	func(i + 1, total + arr[i]);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> s;
	for (int j = 0; j < n; j++)
		cin >> arr[j];
	func(0, 0);
	if (s == 0)//�������� �� ����ó��.
		cnt--;
	cout << cnt;
}