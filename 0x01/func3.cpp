#include <stdio.h>

int	func3(int N)
{
	long	nb = (long)N;
	int	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (1);
		i++;
	}
	return (0);
}

//int	func3(int nb)
//{
//	long long	i;
//	long long	nb_long;
//
//	nb_long = (long long)nb;
//	i = 1;
//	if (nb_long > 0)
//	{
//		while (i <= nb_long / i)
//		{
//			if (i * i == nb_long)
//				return (1);
//			i++;
//		}
//	}
//	return (0);
//}

int	main(void)
{
	printf("%d\n", func3(9));
	printf("%d\n", func3(693953651));
	printf("%d\n", func3(756580036));
}