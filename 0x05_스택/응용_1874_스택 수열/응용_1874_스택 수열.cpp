#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n; //������ ���� ����
	stack<int> sk; //����
	string sign;

	int cnt = 1; //���� sk�� ���ʴ�� ������ ���������鼭 �Էµ� ������ ���� ���� ���� cnt
	while (n--)
	{
		int digit; //���ʴ�� ���� ������ �����Է�
		cin >> digit;
		while (cnt <= digit)
		{
			sk.push(cnt);
			sign += "+\n"; //sign = sign + "+\n" �ϸ� �ð��ʰ���. ��??
			cnt++;
		}
		if (sk.top() != digit)
		{
			cout << "NO\n";
			return 0;
		}
		sk.pop();
		sign += "-\n";
	}
	cout << sign;
}