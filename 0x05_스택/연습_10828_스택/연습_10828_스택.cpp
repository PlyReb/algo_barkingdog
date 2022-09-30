#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	stack<int> stack;
	while (n--)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			int num;
			cin >> num;
			stack.push(num);
		}
		else if (s == "pop")
		{
			if (stack.empty())
				cout << -1 << "\n";
			else
			{
				cout << stack.top() << "\n";
				stack.pop();
			}
		}
		else if (s == "size")
		{
			cout << stack.size() << "\n";
		}
		else if (s == "empty")
			cout << stack.empty() << "\n";
		else
		{
			if (stack.empty())
				cout << -1 << "\n";
			else
				cout << stack.top() << "\n";
		}
	}
}