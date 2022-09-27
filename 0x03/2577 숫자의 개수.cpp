#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c;
	cin >> a >> b >> c;
	int result = a * b * c;
	int arr[10] = { 0, };

	while (result > 0)
	{
		arr[result % 10]++;
		result = result / 10;
	}
	
	int i = 0;
	while (i < 10)
	{
		cout << arr[i] << "\n";
		i++;
	}
}