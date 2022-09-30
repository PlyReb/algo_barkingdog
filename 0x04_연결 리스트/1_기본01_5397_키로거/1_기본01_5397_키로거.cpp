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
		list<char> lst = {}; // list<char> lst; ���� �������� ����??
		string s;
		auto cursor = lst.begin(); //cursor�� ����Ʈ�� ù��° �ּ�. string s�ʹ� ������ ����. 

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
				lst.insert(cursor, c);//string���� c�� for���� ���� ��ȸ�ϸ� ������ ���� ����Ʈ�� ���ʴ�� ����
		}
		for (char c : lst)
			cout << c;
		cout << '\n';
	}
}