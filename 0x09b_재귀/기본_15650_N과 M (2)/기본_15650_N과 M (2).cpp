#include<bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];
int isused[9];

void func(int k)//���� arr[k]���� ������ ����. 
{
	if (k == m)//idx�� 0���ͽ����̹Ƿ� m���� �Դٸ� �̹� ������ ������ ����.
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	int start = 1;//�ڿ����̹Ƿ�.
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