#include <bits/stdc++.h>
using namespace std;

int n;
queue<int> q;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	int i = 1;
	while (n--)
	{
		q.push(i);
		i++;
	}
	while (q.size() != 1)
	{
		q.pop();
		int tmp = q.front();
		q.push(tmp);
		q.pop();
	}
	cout << q.front();
}
