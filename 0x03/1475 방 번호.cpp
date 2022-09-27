#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	/*int n;
	cin >> n;
	int arr[10] = { 0, };
	int result = 1;

	while (n != 0)
	{
		arr[n % 10]++;
		n = n / 10;
	}

	int i = -1;
	while (i < 9)
	{
		i++;
		if (i == 6 || i == 9)
			continue;
		result = max(result, arr[i]);
	}
	result = max(result,(arr[6] + arr[9] + 1) / 2);
	cout << result;*/
	int n;
	int arr[10] = { 0, };
	string s;

	cin >> s;
	for (int i = 0; i < s.length(); i++)
		arr[s[i] - '0']++;
	int sixnine = (arr[6] + arr[9] + 1) / 2;
	arr[6] = arr[9] = sixnine;
	cout << *max_element(arr, arr + 10);

}