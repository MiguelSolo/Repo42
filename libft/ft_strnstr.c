/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:57:42 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/13 17:36:52 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (i + j) < len)
		{
			if (!needle[j + 1])
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
