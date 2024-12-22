/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:13:17 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/28 19:53:40 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **strs)
{
	int	i;

	i = 0;
	if (!strs)
		return ;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static int	ft_word_count(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_stralloc(const char *str, char c, int *k)
{
	char	*word;
	int		start;
	int		len;

	while (str[*k] && str[*k] == c)
		(*k)++;
	start = *k;
	len = 0;
	while (str[*k] && str[*k] != c)
	{
		(*k)++;
		len++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (--len >= 0)
		word[len] = str[start + len];
	return (word);
}

char	**ft_split(char const *str, char c)
{
	char	**dest;
	int		word_count;
	int		i;
	int		pos;

	if (!str)
		return (NULL);
	word_count = ft_word_count(str, c);
	dest = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!dest)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < word_count)
	{
		dest[i] = ft_stralloc(str, c, &pos);
		if (!dest[i])
		{
			ft_free(dest);
			return (NULL);
		}
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
