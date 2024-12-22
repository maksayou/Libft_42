/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:14:47 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/28 19:46:33 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size_dest;
	unsigned int	size_s;
	char			*dest;

	if (!s)
		return (0);
	size_s = ft_strlen(s);
	if (start >= size_s)
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s + start) < len)
		size_dest = ft_strlen(s + start);
	else
		size_dest = len;
	dest = ft_calloc(size_dest + 1, sizeof(char));
	if (!dest)
		return (0);
	ft_strlcpy(dest, s + start, size_dest + 1);
	return (dest);
}

/*int	main(void)
{
	printf("%s\n", ft_substr("Hello world and you", 7, 11));
	printf("%s\n", ft_substr("Hello world and you", 5, 0));
	printf("%s\n", ft_substr("", 7, 11));
	printf("%s\n", ft_substr(" ", 7, 11));
	return (0);
}*/