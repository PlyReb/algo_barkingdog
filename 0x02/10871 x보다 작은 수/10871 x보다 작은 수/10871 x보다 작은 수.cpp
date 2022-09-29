#include <iostream>

using namespace std;

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	n, x;
	cin >> n >> x;
	
	int	arr[10000];

	int	i = 0;
	while (i < n)
	{
		cin >> arr[i];
		i++;
	}

	i = 0;
	while (i < n)
	{
		if (arr[i] < x)
			cout << arr[i] << " ";
		i++;
	}
}