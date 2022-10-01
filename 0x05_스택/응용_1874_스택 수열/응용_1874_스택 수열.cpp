#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n; //수열의 원소 개수
	stack<int> sk; //스택
	string sign;

	int cnt = 1; //스택 sk에 차례대로 들어오고 빠져나가면서 입력된 수열을 만들어갈 숫자 변수 cnt
	while (n--)
	{
		int digit; //차례대로 들어올 수열의 원소입력
		cin >> digit;
		while (cnt <= digit)
		{
			sk.push(cnt);
			sign += "+\n"; //sign = sign + "+\n" 하면 시간초과남. 왜??
			cnt++;
		}
		if (sk.top() != digit)
		{
			cout << "NO\n";
			return 0;
		}
		sk.pop();
		sign += "-\n";
	}
	cout << sign;
}