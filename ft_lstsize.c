/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:26:56 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/29 13:39:13 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	return (ft_lstsize(lst->next) + 1);
}

/*t_list  *ft_lstnew(void *content)
{
        t_list  *lst;

        lst = (t_list *)malloc(sizeof(*lst));
        if (!lst)
                return (NULL);
        lst->content = content;
        lst->next = NULL;
        return (lst);
}

int	main(void)
{
	t_list *head;
	int	size;
       
	head = ft_lstnew((void *)1);
    	head->next = ft_lstnew((void *)2);
    	head->next->next = ft_lstnew((void *)3);
	
	size = ft_lstsize(head);
    	printf("La taille de la liste est : %d\n", size);


    	free(head->next->next);
    	free(head->next);
    	free(head);	
    	return 0;
}*/
