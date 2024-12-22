/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:02:49 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/29 17:18:40 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
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

void	print_list(t_list *lst)
{
    	while (lst)
	{
		printf("%d -> ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int main(void)
{
    	int 	num1;
	int	num2;
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	num1 = 42;
	num2 = 43;
	head = NULL;
	node1 = ft_lstnew(&num1);
	node2 = ft_lstnew(&num2);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);

	print_list(head);
	
	free(node1);
	free(node2);

	return (0);
}*/
