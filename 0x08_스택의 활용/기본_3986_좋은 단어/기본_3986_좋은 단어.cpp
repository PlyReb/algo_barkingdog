#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int cnt = 0;
	while (n--)
	{
		string s;
		cin >> s;
		stack<char> sk;

		for (auto c : s)
		{
			if (sk.empty() != 1 && sk.top() == c)
				sk.pop();
			else
				sk.push(c);
		}
		if (sk.empty() == 1)
			cnt++;
	}
	cout << cnt << "\n";
}