/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:06:31 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/30 11:38:52 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		tmp = *lst;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		return ;
	}
}
/*
int main(void)
{
        t_list **head; 
        t_list **head1; //on va ajouter une nouvelle liste a la liste existante
        t_list *chips;
        t_list *chips1; // premier noeud de la nouvelle liste

        char    *s1 = "Le foot c'est ";
        char    *s2 = "Le foot c'est 9";
        char    *s3 = "Le foot c'est 90";
        char    *s4 = "Le foot c'est 90m";
        char    *s5 = "Le foot c'est 90mi";
        char    *s6 = "Le foot c'est 90min";


        chips = ft_lstnew(s1); // chaine 1
        chips1 = ft_lstnew(s4); // chaine 2
        head = &chips;
        head1 = &chips1;

        ft_lstadd_back(head,ft_lstnew(s2)); // chaine 1
        ft_lstadd_back(head,ft_lstnew(s3));

        ft_lstadd_back(head1,ft_lstnew(s5)); // chaine 2
        ft_lstadd_back(head1,ft_lstnew(s6));

        ft_lstadd_back(head, (*head1));

        printf("%s\n",(char*)(*head)->content);
        printf("%s\n",(char *)((*head)->next)->content);
        printf("%s\n",(char*)(((*head)->next)->next)->content);

        printf("%s\n",(char*)((((*head)->next)->next)->next)->content);
        printf("%s\n",(char*)(((((*head)->next)->next)->next)->next)->content);
        printf("%s\n",(char*)((((((*head)->next)->next)->next)->next)->next)->content);
        return (0);
}*/
