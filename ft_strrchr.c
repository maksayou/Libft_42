/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:12:01 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/27 18:59:29 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_size;

	s_size = 0;
	while (s[s_size])
		s_size++;
	if ((char)c == '\0')
		return ((char *) &s[s_size]);
	while (s_size > 0)
	{
		if (s[s_size - 1] == (char)c)
			return ((char *)&s[s_size - 1]);
		s_size--;
	}
	if (c == '\0')
		return ((char *) &s[s_size]);
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strrchr("teste", 'e'));
	printf("%s\n", ft_strrchr("teste", '\0'));
	return (0);
}*/
