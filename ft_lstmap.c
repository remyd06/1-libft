/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:08:54 by rdedola           #+#    #+#             */
/*   Updated: 2024/05/09 11:10:28 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*func)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp_lst;

	if (lst == NULL)
	{
		return (NULL);
	}
	new_lst = NULL;
	while (lst)
	{
		temp_lst = ft_lstnew(func(lst -> content));
		if (temp_lst == NULL)
		{
			ft_lstclear(&temp_lst, del);
		}
		ft_lstadd_back(&new_lst, temp_lst);
		lst = lst -> next;
	}
	return (new_lst);
}
