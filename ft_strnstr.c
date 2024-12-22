/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:18:55 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/24 12:51:47 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) < 1)
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			while (i + j < len && big[i + j] == little[j] && little[j])
			{
				if (little[j + 1] == '\0')
					return ((char *) big + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 11));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 15));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	printf("%s\n", strstr("lorem ipsum dolor sit amet", ""));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", " ", 15));
	printf("%s\n", ft_strnstr("", "ipsum", 15));
	return (0);
}*/
