#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k;
	cin >> k;
	stack<int> stack;

	while (k--)
	{
		int i;
		cin >> i;
		if (i != 0)
			stack.push(i);
		else
			stack.pop();
	}
	int sum = 0;
	while (stack.empty() != 1)
	{
		sum = sum + stack.top();
		stack.pop();
	}
	cout << sum;
}