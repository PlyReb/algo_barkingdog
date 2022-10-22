#include<bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];
int isused[9];

void func(int k)//수열 arr[k]까지 정해진 상태. 
{
	if (k == m)//idx는 0부터시작이므로 m까지 왔다면 이미 수열이 결정된 상태.
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	int start = 1;//자연수이므로.
	if(k != 0)
		start = arr[k - 1] + 1;
	for (int i = start; i <= n; i++)
	{
		if (!isused[i])
		{
			arr[k] = i;
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
	func(0);
}