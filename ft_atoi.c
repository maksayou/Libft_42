/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:15:37 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/20 19:02:17 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while ((*nptr == ' ') || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if ((*nptr == '-') || (*nptr == '+'))
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		nb = (nb * 10) + (*nptr - '0');
		nptr++;
	}
	return (nb * sign);
}

/*int	main(void)
{
	char	a[] = "-563a45";
	char	b[] = "+563a45,";
	char 	c[] = "aaaa";
	char	d[] = "";
	char	e[] = " ";
	char	max_value[] = "2147483647";

	printf("%d\n", ft_atoi(a));
	printf("%d\n", ft_atoi(b));
	printf("%d\n", ft_atoi(c));
	printf("%d\n", ft_atoi(d));
	printf("%d\n", ft_atoi(e));
	printf("%d\n", ft_atoi(max_value));
	return (0);
}*/
