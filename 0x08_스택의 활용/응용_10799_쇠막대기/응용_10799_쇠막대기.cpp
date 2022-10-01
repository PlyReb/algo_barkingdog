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
			if (s[i - 1] == '(')//앞의 요소가 '(', 현재요소가 ')' 이면 레이저 '()'
			{
				sk.pop();//스택에 들어간 앞의 요소 '('를 빼준다. 막대기가 아니기에.
				result += sk.size();//스택에 쌓여진 막대 개수를 result에 더해준다.
			}
			else//')'가 레이저가 아닌 막대의 끝을 의미한다면
			{
				sk.pop();//스택에 쌓인 막대 한개 빼준다.
				result++; //막대 1개가 절단 된 것과 같다. 
			}
		}
	}
	cout << result << "\n";
}