#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4];
	int j = 0;

	while (j < 3)
	{
		int i = 0;
		int sum = 0;
		while (i < 4)
		{
			cin >> arr[i];
			sum = sum + arr[i];
			i++;
		}
		if (sum == 0)
			cout << "D" << "\n";
		else if (sum == 1)
			cout << "C" << "\n";
		else if (sum == 2)
			cout << "B" << "\n";
		else if (sum == 3)
			cout << "A" << "\n";
		else
			cout << "E" << "\n";
		j++;
	}

}