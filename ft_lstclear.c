/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:29:59 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/29 17:17:08 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst1;
	t_list	*lst2;

	if (!lst || !del)
		return ;
	lst1 = *lst;
	while (lst1)
	{
		lst2 = lst1->next;
		ft_lstdelone(lst1, del);
		lst1 = lst2;
	}
	*lst = NULL;
}
