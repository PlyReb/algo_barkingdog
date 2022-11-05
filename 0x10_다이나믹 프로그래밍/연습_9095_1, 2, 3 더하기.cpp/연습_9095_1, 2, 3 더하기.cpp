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
	for (int i = 0; i < t; i++)//이경우에는 테케 수가 별로 없어서 괜찮지만 수 많아지면 미리 테이블 다 채워넣고 불러오는게 더 효율적
	{
		cin >> n;
		for (int i = 4; i <= n; i++)
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		cout << d[n] << "\n";
	}
}