#include <bits/stdc++.h>
using namespace std;

int n, k;
int cnt[2000001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		cnt[k + 1000000]++;
	}
	for (int i = 0; i <= 2000000; i++)
	{
		while (cnt[i]--)
			cout << i - 1000000 << "\n";
	}

}