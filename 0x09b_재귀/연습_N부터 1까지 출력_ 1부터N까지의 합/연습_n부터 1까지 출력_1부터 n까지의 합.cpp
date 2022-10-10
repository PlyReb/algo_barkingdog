#include <bits/stdc++.h>
using namespace std;

void func1(int n)
{
	if (n == 0)
		return;
	cout << n << "\n";
	func1(n - 1);
}

int func2(int n)
{
	if (n == 0)
		return 0;
	return (n + func2(n - 1));
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	func1(5);
	cout << func2(5);
}