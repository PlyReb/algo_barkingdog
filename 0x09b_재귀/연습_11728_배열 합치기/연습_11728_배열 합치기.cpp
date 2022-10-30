#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1000000], b[1000000], c[2000000];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	
	int a_index = 0, b_index = 0;
	for (int i = 0; i < n + m; i++)
	{
		if (b_index == m)
			c[i] = a[a_index++];//b_index==m 이라면 b배열의 인덱스 최대값+1이 되버린 상태. 더 진행하면 런타임에러
		else if (a_index == n)//위와 마찬가지.
			c[i] = b[b_index++];
		else if (a[a_index] <= b[b_index])
			c[i] = a[a_index++];
		else 
			c[i] = b[b_index++];
	}
	for (int i = 0; i < n + m; i++)
		cout << c[i] << ' ';
}