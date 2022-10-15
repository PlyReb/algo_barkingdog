#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b, int n)
{
	if (n == 1)
	{
		cout << a << ' ' << b << "\n";
		return;
	}
	hanoi(a, 6 - a - b, n - 1);//1��~(n-1)�� �÷���Ʈ���� a�� b�� �ƴ� ���� �ű��
	cout << a << ' ' << b << "\n";// n�� �÷���Ʈ�� b�� �ű��
	hanoi(6 - a - b, b, n - 1);//a�� b�� �Ű��� 1�� ~(n-1)�� �÷���Ʈ���� n���÷���Ʈ�� ��ġ�� b�� �ű��
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	cout << (1 << n) - 1 << "\n"; //left shift ������. ��Ʈ�� �������� �о��� ������ *2 �̹Ƿ� 2^k�� ǥ��. 
	hanoi(1, 3, n);
}