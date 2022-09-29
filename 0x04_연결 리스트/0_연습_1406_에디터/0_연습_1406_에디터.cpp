#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;

	list<char> lst;
	for (char c : s)
	{
		lst.push_back(c);
	}
	//list<char>::iterator cursor = lst.end();
	auto cursor = lst.end();
	int m;
	cin >> m;

	char op, add;
	while (m != 0)
	{
		cin >> op;
		if (op == 'P')
		{
			cin >> add;
			lst.insert(cursor, add);
		}
		else if (op == 'L')
		{
			if (cursor != lst.begin())
				cursor--;
		}
		else if (op == 'D')
		{
			if (cursor != lst.end())
				cursor++;
		}
		else
		{
			if (cursor != lst.begin())
			{
				cursor--;
				cursor = lst.erase(cursor);
			}
		}
		m--;
	}
	for (char c : lst)
		cout << c;
}