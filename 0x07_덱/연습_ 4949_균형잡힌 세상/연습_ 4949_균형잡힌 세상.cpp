#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (1)
	{
		string s;
		getline(cin, s);
		if (s == ".")
			break;
		stack<char> sk;
		bool isValid = true;
		for (char c : s)
		{
			if (c == '(' || c == '[')
				sk.push(c);
			else if (c == ')')
			{
				if (sk.empty() || sk.top() != '(')
				{
					isValid = false;
					break;
				}
				sk.pop();
			}
			else if (c == ']')
			{
				if (sk.empty() || sk.top() != '[')
				{
					isValid = false;
					break;
				}
				sk.pop();
			}
		}
		if (sk.empty() != 1)
			isValid = false;
		if (isValid == true)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}