// #include	<stdio.h>

int ft_button(int i, int j, int k)
{
    if (((i > j) && (i < k)) || ((i < j) && (i > k)))
        return(i);
    else
        if (((j > i) && (j < k)) || ((j < i) && (j > k)))
            return(j);
        else
            return(k);
}

// int		main(void)
// {
// 	printf("%d\n", ft_button(1, 2, 3));
// 	printf("%d\n", ft_button(3, 2, 1));
// 	printf("%d\n", ft_button(3, 1, 2));
// 	printf("%d\n", ft_button(1, 3, 2));
// 	return (0);
// }
