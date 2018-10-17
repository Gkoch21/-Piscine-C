// #include <stdio.h>

unsigned int	ft_active_bits(int value)
{
	int		answer;

	answer = 0;
	while (value)
	{
		if ((value & 1) == 1)
			answer++;
		value >>= 1;
	}
	return (answer);
}

// int				main(void)
// {
// 	printf("%d\n", ft_active_bits(1));
// 	printf("%d\n", ft_active_bits(7));
// 	printf("%d\n", ft_active_bits(6));
// 	return (0);
// }
