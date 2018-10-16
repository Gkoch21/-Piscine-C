// #include	<stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if ((base % 2) == 0)
		base /= 2;
	else
		base = 3 * base + 1;
	return (ft_collatz_conjecture(base) + 1);
}

// int				main(void)
// {
// 	printf("%d\n",ft_collatz_conjecture(2));
// 	printf("%d\n",ft_collatz_conjecture(4));
// 	printf("%d\n",ft_collatz_conjecture(5));
// 	printf("%d\n",ft_collatz_conjecture(7));
// 	printf("%d\n",ft_collatz_conjecture(10));
// 	return (0);
// }
