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
			c[i] = a[a_index++];//b_index==m �̶�� b�迭�� �ε��� �ִ밪+1�� �ǹ��� ����. �� �����ϸ� ��Ÿ�ӿ���
		else if (a_index == n)//���� ��������.
			c[i] = b[b_index++];
		else if (a[a_index] <= b[b_index])
			c[i] = a[a_index++];
		else 
			c[i] = b[b_index++];
	}
	for (int i = 0; i < n + m; i++)
		cout << c[i] << ' ';
}