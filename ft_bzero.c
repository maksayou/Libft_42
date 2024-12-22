/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:34:10 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/28 21:27:17 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*int main(void)
{
	char a[] = "I'am afraid of Born2beroot";
	size_t len = sizeof(a);

	printf("Avant ft_bzero : %s\n", a);

	ft_bzero(a, 5);

	printf("Après ft_bzero (avec printf): %s\n", a);

	printf("Contenu complet du tableau : ");
	size_t i = 0; // Initialisation de l'indice
	while (i < len) // Condition de boucle
	{
    		if (a[i] == '\0')
        		printf("\\0"); // Affiche '\0' de manière explicite
   		else
        		printf("%c", a[i]);
    		i++; // Incrémentation de l'indice
	}
	printf("\n");
	return (0);
}*/
