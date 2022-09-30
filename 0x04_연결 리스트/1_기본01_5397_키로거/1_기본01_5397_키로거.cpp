#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		list<char> lst = {}; // list<char> lst; 와의 차이점은 뭔가??
		string s;
		auto cursor = lst.begin(); //cursor는 리스트의 첫번째 주소. string s와는 관련이 없다. 

		cin >> s;
		for (char c : s)
		{
			if (c == '<')
			{
				if (cursor != lst.begin())
					cursor--;
			}
			else if (c == '>')
			{
				if (cursor != lst.end())
					cursor++;
			}
			else if (c == '-')
			{
				if (cursor != lst.begin())
				{
					cursor--;
					cursor = lst.erase(cursor);
				}
			}
			else
				lst.insert(cursor, c);//string에서 c가 for문을 통해 순회하며 나오는 값을 리스트에 차례대로 저장
		}
		for (char c : lst)
			cout << c;
		cout << '\n';
	}
}