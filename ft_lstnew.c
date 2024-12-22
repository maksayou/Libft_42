/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:42:57 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/29 13:01:05 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(*lst));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

/*int main(void)
{
    	int num;
	t_list *node;
	
	num = 42;
    	node = ft_lstnew(&num);
	printf("Le contenu du noeud est : %d\n", *(int *)node->content);
	printf("Le champ 'next' pointe vers : %p\n", (void *)node->next);
	return (0);
}*/
