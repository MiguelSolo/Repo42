/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:30:12 by marvin            #+#    #+#             */
/*   Updated: 2024/04/10 21:30:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;

	newlst = malloc(ft_lstsize(lst) * sizeof(size_t));
	if (!newlst)
		return (NULL);
	while (lst)
	{
		newlst->content = f(lst->content);
		newlst->next;
	}
	return (newlst);
}