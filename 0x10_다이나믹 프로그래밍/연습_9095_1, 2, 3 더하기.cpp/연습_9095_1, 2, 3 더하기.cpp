#include<bits/stdc++.h>
using namespace std;

int t, n;
int d[12];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	d[1] = 1;
	d[2] = 2;
	d[3] = 4;

	cin >> t;
	for (int i = 0; i < t; i++)//�̰�쿡�� ���� ���� ���� ��� �������� �� �������� �̸� ���̺� �� ä���ְ� �ҷ����°� �� ȿ����
	{
		cin >> n;
		for (int i = 4; i <= n; i++)
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		cout << d[n] << "\n";
	}
}