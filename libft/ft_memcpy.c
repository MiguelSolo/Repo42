/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:43:38 by mirodri2          #+#    #+#             */
/*   Updated: 2024/03/14 15:19:34 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*ptr_d;
	char		*ptr_c;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	ptr_d = (char *) dst;
	ptr_c = (char *) src;
	while (i < n)
	{
		ptr_d[i] = ptr_c[i];
		i++;
	}
	return (ptr_d);
}
