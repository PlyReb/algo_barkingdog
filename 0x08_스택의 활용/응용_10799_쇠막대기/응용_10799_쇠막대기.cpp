#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int result = 0;
	stack<char> sk;

	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			sk.push(s[i]);
		else//s[i] == ')'
		{
			if (s[i - 1] == '(')//���� ��Ұ� '(', �����Ұ� ')' �̸� ������ '()'
			{
				sk.pop();//���ÿ� �� ���� ��� '('�� ���ش�. ����Ⱑ �ƴϱ⿡.
				result += sk.size();//���ÿ� �׿��� ���� ������ result�� �����ش�.
			}
			else//')'�� �������� �ƴ� ������ ���� �ǹ��Ѵٸ�
			{
				sk.pop();//���ÿ� ���� ���� �Ѱ� ���ش�.
				result++; //���� 1���� ���� �� �Ͱ� ����. 
			}
		}
	}
	cout << result << "\n";
}