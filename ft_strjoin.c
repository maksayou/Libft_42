/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:20:31 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/20 18:24:24 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen (s2) + 1;
	dest = malloc(size * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		dest[i] = s1 [i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
