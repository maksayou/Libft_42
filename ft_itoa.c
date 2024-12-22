/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:11:51 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/24 16:42:19 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len += 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;
	long	nb;

	nb = n;
	i = 0;
	len = ft_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		i = 1;
		nb = -nb;
	}
	while (len > i)
	{
		str[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (str);
}
/*
int     main(void)
{
        printf("%s\n", ft_itoa(0));
        printf("%s\n", ft_itoa(42));
        printf("%s\n", ft_itoa(-42));
        printf("%s\n", ft_itoa(2147483647));
        printf("%s\n", ft_itoa(-2147483648));
        printf("%s\n", ft_itoa(0));
        return (0);
}*/
