#include <stdio.h>
//int	func4(int N)
//{
//	int	i;
//	
//	i = 1;
//	while (i <= N)
//	{
//		i = i * 2;
//	}
//	i = i / 2;
//	return (i);
//}

int	func4(int N)
{
	int	i;

	i = 1;
	while (i * 2 <= N)
	{
		i = i * 2;
	}
	return (i);
}

int	main(void)
{
	printf("%d\n",func4(5));
	printf("%d\n",func4(97615282));
	printf("%d\n",func4(1024));
}