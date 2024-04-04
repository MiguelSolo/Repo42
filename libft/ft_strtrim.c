/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:17:25 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/14 16:19:20 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_search_head(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	return (i);
}

size_t	ft_search_tail(char const *s1, char const *set, size_t head)
{
	size_t	i;

	i = ft_strlen(s1);
	while (i > head && ft_strchr(set, s1[i - 1]))
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	head;
	size_t	tail;

	if (!s1 || !set)
		return (NULL);
	head = ft_search_head(s1, set);
	tail = ft_search_tail(s1, set, head);
	return (ft_substr(s1, head, tail - head));
}
