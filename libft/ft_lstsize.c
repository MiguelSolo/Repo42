/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 21:04:35 by marvin            #+#    #+#             */
/*   Updated: 2024/04/08 21:04:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}