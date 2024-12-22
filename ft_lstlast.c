/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:55:40 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/29 17:19:26 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
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

void    print_list(t_list *lst)
{
        while (lst)
        {
                printf("%d -> ", *(int *)lst->content);
                lst = lst->next;
        }
        printf("NULL\n");
}

int	main(void)
{
	t_list	*last;
	t_list  *head;
	int	num1;
	int	num2;
	int	num3;

	num1 = 1;
	num2 = 2;
	num3 = 3;
	head = ft_lstnew((&num1));
	head->next = ft_lstnew(&num2);
	head->next->next = ft_lstnew(&num3);
	last = ft_lstlast(head);

	printf("%d -> ", *(int*)last->content);

	free(head->next->next);
    	free(head->next);
    	free(head);
	return (0);
}*/
