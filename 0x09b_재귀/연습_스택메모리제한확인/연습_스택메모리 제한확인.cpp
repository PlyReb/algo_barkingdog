#include <bits/stdc++.h>
using namespace std;

void func1(int n)
{
	if (n == 0)
		return;
	func1(n - 1);
}

int main(void)
{
	func1(100000);
	cout << "done";
}