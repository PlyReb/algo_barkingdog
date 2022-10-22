#include <bits/stdc++.h>
using namespace std;

int num[9];
int n, m;
int arr[9];
int isused[9];

void func(int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << num[arr[i]] << " ";
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++)//인덱스로 대응 된다. 
	{
		if (!isused[i])
		{
			arr[k] = i;//arr[k]를 i인덱스로 대응
			isused[i] = 1;
			func(k + 1);
			isused[i] = 0;
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	sort(num, num + n);
	func(0);
}