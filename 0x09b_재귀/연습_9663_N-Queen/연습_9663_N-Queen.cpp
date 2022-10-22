#include <bits/stdc++.h>
using namespace std;

int n;

bool isused1[31];//���� ������
bool isused2[31];//����� �밢������
bool isused3[31];//�»��� �밢������

int cnt = 0;

void func(int k)
{
	if (k == n)//��ǥ�� ���� �� k��° ���� n�� ���� ��. ���� ������ ����� ��ġ���� ��
	{
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++)// (k��° ��, i��° ��)�� queen  ��ġ. 
	{
		if (isused1[i] || isused2[i+k] || isused3[k-i+n-1])
			continue;//�ش� ���� ���� ���� queen�� ��ġ�غ���. ���� i==n�� �ǰԵǸ� queen��ġ�� ����.
		isused1[i] = 1;
		isused2[k + i] = 1;
		isused3[k - i + n - 1] = 1;
		func(k + 1);
		isused1[i] = 0;//���󺹱�
		isused2[k + i] = 0;
		isused3[k - i + n - 1] = 0;
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	func(0);
	cout << cnt;
}