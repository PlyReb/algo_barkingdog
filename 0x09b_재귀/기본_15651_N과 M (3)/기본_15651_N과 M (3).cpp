#include<bits/stdc++.h>
using namespace std;

int n, m;
int arr[8];
//int isused[8]필요 없다. 중복되도 되기 때문.

void func(int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++)//항상 자연수 조심!!
	{
		arr[k] = i;
		func(k + 1);
	}
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m;
	func(0);

}